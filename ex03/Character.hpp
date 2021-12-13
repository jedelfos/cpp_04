#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter{

	private:
		std::string	_name;
		AMateria*	_inventory[4];

	public:
		Character( void );
		Character( std::string name );
		Character( const Character& obj );
		~Character( void );

		Character&					operator=( const Character& rhs );

		const AMateria* const*		getInventory( void ) const;

		virtual const std::string&	getName( void ) const;
		virtual void				equip( AMateria* m );
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
};

#endif
