#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"


class	Character : public ICharacter
{
private:
			std::string	_name;
			AMateria	*inventory[4];
			int			invent_fill;
						
public:
						Character( void );
						Character( std::string const &name );
						Character( Character const &src );
	Character			&operator=( Character const &rhs );
						~Character( void );
	std::string const	&getName( void ) const;
	// void				equip( AMateria* m );
	// void				unequip( int idx );
	// void				use( int idx, ICharacter& target );
};


#endif