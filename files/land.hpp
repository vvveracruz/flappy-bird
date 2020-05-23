#pragma once

#include <vector>
#include <SFML/Graphics.hpp>

#include "game.hpp"

namespace vgg {

class Land {
  
public:
    Land( GameDataRef data );
    
    void MoveLand( float dt );
    void DrawLand( );
    
private:
    GameDataRef _data;
    
    std::vector<sf::Sprite>_landSprite;
    
};
}
