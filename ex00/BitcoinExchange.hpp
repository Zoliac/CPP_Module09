#pragma once 

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>

class BitcoinExchange {
	private:
		std::map<std::string, float> _data;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange& operator=(const BitcoinExchange &src);
		~BitcoinExchange();
		void FillMap(std::string DataBase);
		void CalculateValue(std::string infile);
		std::map<std::string, float>::iterator findDateInMap(std::string date);

};