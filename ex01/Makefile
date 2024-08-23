CC=g++
CFLAGS=-I. -Wall -Wextra -Werror -std=c++98

# Default target
all: ex01

ex01: main.o ClapTrap.o ScavTrap.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $<

ClapTrap.o: ClapTrap.cpp
	$(CC) $(CFLAGS) -c $<

ScavTrap.o: ScavTrap.cpp
	$(CC) $(CFLAGS) -c $<

# Clean target
clean:
	rm -f *.o ex01

# Rebuild target
re: fclean all

fclean: clean
	rm -f ex01

.PHONY: all clean re fclean
