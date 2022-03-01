#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
						Cure( void );
						Cure( std::string const & type );
						~Cure( void );
						Cure( Cure const &src);
	Cure				&operator=( Cure const &rhs);
	Cure*				clone( void ) const;
	void				use(ICharacter& target);
};

#endif