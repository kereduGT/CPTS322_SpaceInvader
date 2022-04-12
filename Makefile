CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o  draw.o board.o player.o enemy.o 
-lncurses

main: $(OBJECTS)
		$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): board.hpp draw.hpp  Player.hpp 
enemy.hpp
clean:
	rm *.o 