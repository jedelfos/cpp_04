#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat default constructor called" << std::endl;

	_type = "Cat";
	_brain = new Brain;
}

Cat::Cat( const Cat& obj ) {
	std::cout << "Cat copy constructor called" << std::endl;

	_brain = new Brain;
	*this = obj;
}

Cat::~Cat( void ) {
	std::cout << "Cat Destructor called" << std::endl;

	delete _brain;
}

Cat&	Cat::operator=( const Cat& rhs ) {
	std::cout << "Cat Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);

	_type = rhs.get_type();
	*_brain = *rhs._brain;
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Miaou !" << std::endl;
}
