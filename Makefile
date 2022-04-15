CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o draw.o board.o player.o enemy.o menu.o gameplay.o -lncurses

main: $(OBJECTS)
		$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): board.hpp draw.hpp  player.hpp enemy.hpp menu.hpp gameplay.hpp 

clean:
	rm *.o 