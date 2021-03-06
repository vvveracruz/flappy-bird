#include "pipe.hpp"
#include <iostream>

namespace vgg {

Pipe::Pipe( GameDataRef data ) : _data( data ){
    
    _landHeight = _data -> assets.GetTexture( "Land" ).getSize( ).y;
    _pipeSpawnYOffset = 0;
    
    
}

void Pipe::SpawnBottomPipe( ) {
    
    sf::Sprite sprite( _data -> assets.GetTexture( "Pipe Up" ) );
    
    sprite.setPosition( _data -> window.getSize( ).x,
                        _data -> window.getSize( ).y - sprite.getGlobalBounds( ).height - _pipeSpawnYOffset );
    
    pipeSprites.push_back( sprite );
    
}

void Pipe::SpawnTopPipe( ) {
    
    sf::Sprite sprite( _data -> assets.GetTexture( "Pipe Down" ) );
    
    sprite.setPosition( _data -> window.getSize( ).x,
                        0 - _pipeSpawnYOffset);
    
    pipeSprites.push_back( sprite );
    
}

void Pipe::SpawnInvisiblePipe( ) {
    
    sf::Sprite sprite( _data -> assets.GetTexture( "Pipe Down" ) );
    
    sprite.setPosition( _data -> window.getSize( ).x, 0 );
    
    sprite.setColor( sf::Color( 0,0,0,0 ) );
    
    pipeSprites.push_back( sprite );
    
}

void Pipe::MovePipes( float dt ) {
    
    for ( unsigned short int i = 0; i< pipeSprites.size( ) ; i++ ) {
        
        if ( pipeSprites.at( i ).getPosition( ).x < 0 - pipeSprites.at( i ).getGlobalBounds( ).width ) {
            
            pipeSprites.erase( pipeSprites.begin( ) + i );
            
        } else {
            
            float movement = PIPE_SPEED * dt ;
            pipeSprites.at( i ).move( -movement , 0 );
            
        }
    }
}

void Pipe::DrawPipes( ){
    
    for ( unsigned short int i = 0; i< pipeSprites.size( ) ; i++ ) {
        _data -> window.draw( pipeSprites.at( i ) );
        
    }
}

void Pipe::RandomisePipeOffset( ) {
    
    _pipeSpawnYOffset = rand( ) % ( _landHeight );
    
}
}
