#pragma once

#include <SFML/Graphics.hpp>
#include "state.hpp"
#include "game.hpp"
#include "pipe.hpp"

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
    
    sf::Clock _clock;

    sf::Sprite _background;
    
    Pipe *pipe;
    
};
}
