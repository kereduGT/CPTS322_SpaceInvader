CXX = g++
CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o -lncurses

main: $(OBJECTS)
		$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): board.hpp draw.hpp menu.hpp Player.hpp 
enemy.hpp
clean:
	rm *.o 