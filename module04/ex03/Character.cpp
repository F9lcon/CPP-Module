#include "Character.hpp"

Character::Character( void )
{
    this->_name = "Default_name_character";
    invent_fill = 0;
	std::cout << "Character was created" << std::endl;
}

Character::Character( std::string const &name )
{
    invent_fill = 0;
    this->_name = name;
    (void) inventory;
	std::cout << "Character was created" << std::endl;
}

Character::~Character( void )
{
	std::cout << "Character was destroy" << std::endl;
}

Character	&Character::operator=( Character const &rhs)
{
    if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

Character::Character( Character const &srs)
{
	*this = srs;
	std::cout << "Character was copy" << std::endl;
}

std::string const &Character::getName( void ) const
{
    return (this->_name);
}