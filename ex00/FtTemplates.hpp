#ifndef FTTEMPLATES_HPP
# define FTTEMPLATES_HPP 

#include <iostream>

/*
- the template keyword is used to specify that Swap is a function template. 
- the template parameter T is used to denote the data type of the arguments that will be passed to the function. 'T' means any type
- When an argument of a data type is passed to functionName(), the compiler generates a new version of functionName() for the given data type.
- arguments a and b are passed by reference, so that their values are changed in the function.
*/
template <typename T>
void	swap(T &a, T &b) {

	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T &a, T &b) {

	if (a > b)
		return b;
	else if (b > a)
		return a;
	else
		return b;
}

template <typename T>
T	max(T &a, T &b) {

	if (a < b)
		return b;
	else if (b < a)
		return a;
	else
		return b;
}

#endif