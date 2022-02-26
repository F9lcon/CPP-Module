#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define ALL 2
#define HALF ALL / 2

int	main( void )
{
	Cat *a = new Cat();
	Cat b = *a;
	delete a;
	b.makeSound();
	delete b;
	// Animal	*a[ALL];

	// for (int i = 0; i < HALF; i++)
	// {
	// 	a[i] = new Cat();
	// }
	// for (int i = HALF; i < ALL; i++)
	// {
	// 	a[i] = new Dog();
	// }

	// for (int i = 0; i < ALL; i++)
	// {
	// 	delete a[i];
	// }


}