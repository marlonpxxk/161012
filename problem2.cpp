#include <iostream>
#include <string>

template <class T>
class Vector2D
{
public:
	T x_, y_;
	
	Vector2D(const T& x_input, const T& y_input)
		: x_(x_input), y_(y_input)
	{}

	void print()
	{
		std::cout << x_ << " " << y_ << std::endl;
	}
};

int main()
{
	Vector2D<int> int_vector(1, 9);
	int_vector.print();

	Vector2D<float> float_vector(2.345, 5.14);
	float_vector.print();

	Vector2D<std::string> str_vector("Hello", "World");
	str_vector.print();

	return 0;
}
