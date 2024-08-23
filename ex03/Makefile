CC=g++
CFLAGS=-I. -Wall -Wextra -Werror -std=c++98

# Default target
all: ex03

ex03: main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $<

ClapTrap.o: ClapTrap.cpp
	$(CC) $(CFLAGS) -c $<

ScavTrap.o: ScavTrap.cpp
	$(CC) $(CFLAGS) -c $<

FragTrap.o: FragTrap.cpp
	$(CC) $(CFLAGS) -c $<

DiamondTrap.o: DiamondTrap.cpp
	$(CC) $(CFLAGS) -c $<

# Clean target
clean:
	rm -f *.o ex03

# Rebuild target
re: fclean all

fclean: clean
	rm -f ex03

.PHONY: all clean re fclean
