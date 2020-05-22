#pragma once

#include <SFML/Graphics.hpp>
#include "state.hpp"
#include "game.hpp"

namespace vgg {

class MainMenuState : public State {
    
public:
    MainMenuState( GameDataRef data);
    
    void Init( );
    
    void HandleInput( );
    void Update( float dt );
    void Draw( float dt );
    
private:
    GameDataRef _data;
    
    sf::Sprite _background;
    sf::Sprite _title;
    sf::Sprite _playButton;
    
};
}
