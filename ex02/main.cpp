#include "Array.hpp"

int main()
{
	/*int array*/
	Array<int>int_arr(5);

	int i = 0;
	while ((unsigned int)i <=5 )
	{
		try
		{
			int_arr[i] = i;
			std::cout << "int: " << int_arr[i] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		i++;
	}
	i = 0;

	/*string array*/
	Array<std::string>str_arr(3);

	std::string array[3] = {"42", "is", "great!"};
	while ((unsigned int)i < 3)
	{
		try
		{
			str_arr[i] = array[i];
			std::cout << "string: " << str_arr[i] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		i++;
	}
	/*Construction by copy and assignment operator. In both cases, modifying either the
	original array or its copy after copying musn’t affect the other array.*/
	Array<std::string> copy_string(str_arr);

	std::cout << "copy_string array = ";
	for (int k = 0; k < 3; k++) {
		std::cout << copy_string[k] << " ";
	}
	
	copy_string[2] = "hard!";
	std::cout << "\ncopy_string after change = ";
	for (int k = 0; k < 3; k++) {
		std::cout << copy_string[k] << " ";
	}
	
	std::cout << "\n(original) str_array[2] after change = ";
	for (int k = 0; k < 3; k++) {
		std::cout << str_arr[k] << " ";
	}
	std::cout << "\n";
	
	Array<int> test_int(2);

	std::cout << "size of test_int = " << test_int.getSize() << std::endl;
	test_int = int_arr;

	std::cout << "size of test_int after using assignment operator = " << test_int.getSize() << std::endl;

	

	return 0;
}
