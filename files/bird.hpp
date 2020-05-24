#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.hpp"
#include "game.hpp"

namespace vgg {

class Bird {
  
public:
    Bird( GameDataRef data );
    
    void DrawBird( );
    
private:
    GameDataRef _data;
    
    sf::Sprite _birdSprite;
    
};
}
