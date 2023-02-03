#include "Array.hpp"

int main()
{
	Array<int>int_arr(5);
	Array<std::string>str_arr(3);
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
	return 0;
}
