#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

#include "game.hpp"
#include "DEFINITIONS.hpp"

namespace vgg {

class Pipe {
  
public:
    Pipe( GameDataRef data );
    
    void SpawnBottomPipe( );
    void SpawnTopPipe( );
    void SpawnInvisiblePipe( );
    void MovePipes( float dt );
    void DrawPipes( );
    void RandomisePipeOffset( );
    
private:
    GameDataRef _data;
    std::vector< sf::Sprite > pipeSprites;
    
    int _landHeight;
    int _pipeSpawnYOffset;
    
};
}
