#include "Cure.hpp"

Cure::Cure( void ) {
	std::cout << "Cure default constructor called" << std::endl;

	_type = "cure";
}

Cure::Cure( const Cure& obj ) {
	std::cout << "Cure copy constructor called" << std::endl;

	*this = obj;
}

Cure::~Cure( void ) {
	std::cout << "Cure Destructor called" << std::endl;
}

Cure&		Cure::operator=( const Cure& rhs ) {
	std::cout << "Cure assignment operator called" << std::endl;
	if(this == &rhs)
		return (*this);

	_type = rhs.get_type();
	return (*this);
}

void		Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*	Cure::clone( void ) const {
	return ( new Cure() );
}
