#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main( void )
{
	AMateria *a = new Ice();
    ICharacter  *b = new Character("me");
	AMateria *c = new Cure();

	a->use(*b);
    c->use(*b);
	delete a;
	delete b;
	delete c;
	return (0);
}