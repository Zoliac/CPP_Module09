#include "PmergeMe.hpp"

int main(int ac, char **av) {
	if (ac < 3) {
		std::cout << "Error: Not enough arguments, usage : ./PmergeMe <nb> <nb> <nb>..." << std::endl;
		return (1);
	}
	PmergeMe sorter;
	sorter.parsing(av);
	sorter.vecSort();
	sorter.deqSort();
	sorter.DisplayResult();
}