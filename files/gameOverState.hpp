#pragma once

#include <SFML/Graphics.hpp>
#include "state.hpp"
#include "game.hpp"

namespace vgg {

class GameOverState : public State {
    
public:
    GameOverState( GameDataRef data);
    
    void Init( );
    
    void HandleInput( );
    void Update( float dt );
    void Draw( float dt );
    
private:
    GameDataRef _data;
    
    sf::Clock _clock;

    sf::Sprite _background;
    
};
}
