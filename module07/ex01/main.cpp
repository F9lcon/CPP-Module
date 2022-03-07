#include <iostream>
#include "iter.hpp"


// class Awesome
// {
// 	public:
// 		Awesome(void): _n(42) {return ;}
// 		int get(void ) const {return this->_n;};
// 	private:
// 		int _n;
// };

// std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
// {
// 	o << rhs.get();
// 	return (o);
// }


int main( void )
{
	// int tab[] = {0, 1, 2, 3, 4};
	// Awesome tab2[5];

	// iter(tab, 5, print);
	// iter(tab2, 5, print);

	int arr_int[] = {1, 2, 3};
	float arr_float[] = {1.1f, 2.2f, 3.333333f};
	iter(arr_int, 3, print);
	iter(arr_float, 3, print);
	return (0);
}