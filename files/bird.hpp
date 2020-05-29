#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

#include "DEFINITIONS.hpp"
#include "game.hpp"

namespace vgg {

class Bird {
  
public:
    Bird( GameDataRef data );
    
    void DrawBird( );
    
    void Animate( float dt );
    
private:
    GameDataRef _data;
    
    sf::Sprite _birdSprite;
    std::vector<sf::Texture> _animationFrames;
    
    unsigned int _animationIterator;
    
    sf::Clock _clock;
    
};
}
