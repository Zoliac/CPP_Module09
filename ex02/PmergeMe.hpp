#pragma once

#include <vector>
#include <deque>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <algorithm>

class PmergeMe {
	private:
		std::vector<int> _vec;
		std::deque<int> _deq;
		double _vectime;
		double _deqtime;
		PmergeMe(const PmergeMe &src);
		PmergeMe& operator=(const PmergeMe &src);
	public:
		PmergeMe();
		~PmergeMe();
		void parsing(char **argv);
		void vecSort();
		void deqSort();
		void MergeVec(std::vector<int> &vec);
		void MergeDeq(std::deque<int> &vec);
		void insertJacobSthalV(std::vector<std::pair<int, int> >& pairs, std::vector<int>& result, std::vector<bool>& inserted);
		void insertJacobSthalD(std::deque<std::pair<int, int> >& pairs, std::deque<int>& result, std::deque<bool>& inserted);
		void DisplayResult();
};