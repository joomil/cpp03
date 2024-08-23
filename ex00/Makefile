CC=g++
CFLAGS=-I. -Wall -Wextra -Werror -std=c++98

# Default target
all: ex00

# Target to compile the project
ex00: main.o ClapTrap.o
	$(CC) $(CFLAGS) -o ex00 main.o ClapTrap.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) -c ClapTrap.cpp

# Custom 're' target to clean and compile
re: fclean all

# Clean up object files and executable
clean:
	rm -f *.o

# Full clean up, including object files and executable
fclean: clean
	rm -f ex00

.PHONY: all clean fclean re
