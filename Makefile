run:
	g++ -c files/main.cpp -ImyExtlib/SFML/include
	g++ main.o -o sfml-app -LmyExtlib/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
	export LD_LIBRARY_PATH=myExtlib/SFML/lib && ./sfml-app
