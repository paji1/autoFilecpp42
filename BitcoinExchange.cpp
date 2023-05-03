#include "BitcoinExchange.hpp"

/*** ------------------------------- CONSTRUCTOR --------------------------------*/
BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange Constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

/*** -------------------------------- DESTRUCTOR --------------------------------*/
BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange Destructor called" << std::endl;
}

/*** --------------------------------- OVERLOAD ---------------------------------*/
BitcoinExchange&   BitcoinExchange::operator=(BitcoinExchange const & other )
{
	return *this;
}

/*** --------------------------------- METHODS ----------------------------------*/


/*** --------------------------------- ACCESSOR ---------------------------------*/

/*** --------------------------------- ACEPTION ---------------------------------*/

