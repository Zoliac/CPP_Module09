#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: Not enough arguments." << std::endl << "Usage: ./btc <file_name>" << std::endl;
		exit(0);
	}
	BitcoinExchange	test;
	test.FillMap("data.csv");
	test.CalculateValue(av[1]);
}