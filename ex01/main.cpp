#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: invalid args.\nUsage: ./RPN '<arg>'\n";
		return(1);
	}
	RPN test;

	test.calculate(av[1]);
}