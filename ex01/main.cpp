#include "iter.hpp"


class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T > 
void print( T  & x ) { 
	
	std::cout << x << std::endl; 
	return;
}

int	main() {

	int	arr[] = {1, 2, 3, 4};
	size_t	len = 4;
	//int (*ptr)(int const &) = addOne;

	std::cout << "after iter: \n";
	::iter(arr, len, addOne);
	for (size_t i = 0; i < len; i++) 
	{
        std::cout << arr[i] << ", ";
    }
	std::cout << std::endl;


	std::string stringArray[] = {"one", "two", "three", "four"};
	size_t arrayLength = 4;
	::iter(stringArray, arrayLength, addNone);
	std::cout << "after iter: \n";
	for (size_t j = 0; j < arrayLength; j++) 
	{
        std::cout << stringArray[j] << ", ";
    }
	std::cout << std::endl;

	char charArray[] = {'a', 'b', 'c', 'd'};
	size_t charArrayLength = 4;
	::iter(charArray, charArrayLength, isC);
	std::cout << "after iter: \n";
	for (size_t k = 0; k < charArrayLength; k++) 
	{
        std::cout << charArray[k] << ", ";
    }
	std::cout << std::endl;


int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	int sizey = 5;
	::iter( tab, sizey, print );
	::iter( tab2, sizey, print );
	return 0;
}