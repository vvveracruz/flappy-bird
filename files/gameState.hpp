#pragma once

#include <SFML/Graphics.hpp>
#include "state.hpp"
#include "game.hpp"
#include "pipe.hpp"
#include "land.hpp"
#include "bird.hpp"

namespace vgg {

class GameState : public State {
    
public:
    GameState( GameDataRef data);
    
    void Init( );
    
    void HandleInput( );
    void Update( float dt );
    void Draw( float dt );
    
private:
    GameDataRef _data;
    sf::Sprite _background;
    
    Pipe *pipe;
    Land *land;
    Bird *bird;
    
    sf::Clock clock;
    
};
}
