#include <iostream>
#include <string>

template <typename T>
T print(T i)
{
	std::cout << i << std::endl;

	return i;
}

int main()
{
	print(1);
	print(2.345f);
	print("Hello World");

	return 0;
}