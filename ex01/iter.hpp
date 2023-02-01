#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
/*• The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be call on every element of the array.
Turn in a main.cpp file that contains your tests. Provide enough code to generate a
test executable.
Your iter function template must work with any type of array. The third parameter
can be an instantiated function template.*/

template <typename T>
void	iter(T *arr, size_t len, void (*f)(T & arg)) {

	for (size_t i = 0; i < len; i++) 
	{
        f(arr[i]);
    }
}

/*increments element*/
template <typename T>
void	addOne(T & element)
{
	element++;
}

/*adds "None" to element*/

template <typename T>
void	addNone(T & element)
{
	 element = element + "None";
}

/*changes element to 'C'*/
template <typename T>
void	isC(T & element)
{
	 element = 'C';
}
#endif
