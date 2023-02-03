ex00: function template
ex01: iteration
ex02: ...

What is a function template?
A function template in C++ is a blueprint for creating functions with similar properties but with different data types. It allows the developer to write a single function that can be reused for different data types without having to rewrite the code for each data type. 

An example of a function template: 

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


What is the difference between a class template and a function template?
In C++, a function template is a blueprint for a function that can work with different data types. The function is created by specifying a generic data type (template type) in the function signature, which is replaced with a specific data type at compile time.

A class template, on the other hand, is a blueprint for a class that can contain member functions that operate on different data types. The class is defined with a template type, just like a function template, but in this case, the template type affects both data members and member functions.

In short, a function template is a single function that works with multiple data types, while a class template is a blueprint for a class that can contain multiple functions, all working with the same data type.
