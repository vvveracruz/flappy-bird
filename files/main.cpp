#include <SFML/Graphics.hpp>

int main( ) {
    
    sf::RenderWindow window( sf::VideoMode(  640, 480 ), "Hello" );
    
    while ( window.isOpen() ) {
        
        sf::Event event;
        
        // handle events
        while ( window.pollEvent( event ) ) {
            switch ( event.type ) {
                case sf::Event::Closed:
                    window.close();
                    
                    break;
                    
                default:
                    break;
            }
        }
        
        // update game
        
        window.clear( );
        
        // draw objects here
        
        window.display( );
        
        
    }
    
}
