#pragma once 
#include <ctime>
#include <map>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <cstring>
#include <fstream>

class BitcoinExchange {
	private:
		std::map<std::time_t, double>	_data;

		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &bitcoinExchange);
		BitcoinExchange	&operator=(const BitcoinExchange &bitcoinExchange);

	public:
		BitcoinExchange(const std::string &dataFile);
		~BitcoinExchange();
		void displayExchange(const std::string &fileName);
};