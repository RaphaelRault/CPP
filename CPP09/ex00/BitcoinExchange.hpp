#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <limits>
#include <stdexcept>
#include <string>
#include <algorithm>
#include <ctime>

class BitcoinExchange
{
    private:
        std::map<std::string, double> exchangeRates;
        void loadDataBase(const std::string &filename);
        double getExchangeRate(const std::string &date);
        bool isValidDate(const std::string &date);
        bool isValidValue(double value);
        void printExchange(const std::string &date, double value, double rate);
    public:
        BitcoinExchange(const std::string &databaseFile);
        void processInput(const std::string &inputFile);
};

#endif