#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat( const Cat& obj ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat::~Cat( void ) {
	std::cout << "Cat Destructor called called" << std::endl;
}

Cat&	Cat::operator=( const Cat& rhs ) {
	if (this == &rhs)
		return (*this);

	_type = rhs.get_type();
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow!" << std::endl;
}



WrongCat::WrongCat( void ) {
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& obj ) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Destructor called called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& rhs ) {
	if (this == &rhs)
		return (*this);

	_type = rhs.get_type();
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Meow Meow!" << std::endl;
}

