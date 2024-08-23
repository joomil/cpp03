CC=g++
CFLAGS=-I. -Wall -Wextra -Werror -std=c++98

# Default target
all: ex02

ex02: main.o ClapTrap.o ScavTrap.o FragTrap.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $<

ClapTrap.o: ClapTrap.cpp
	$(CC) $(CFLAGS) -c $<

ScavTrap.o: ScavTrap.cpp
	$(CC) $(CFLAGS) -c $<

FragTrap.o: FragTrap.cpp
	$(CC) $(CFLAGS) -c $<

# Clean target
clean:
	rm -f *.o ex02

# Rebuild target
re: fclean all

fclean: clean
	rm -f ex02

.PHONY: all clean re fclean
