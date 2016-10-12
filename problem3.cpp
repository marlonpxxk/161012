#include <iostream>
#include <string>

class Box // NO PARENT
{
public:
	// some variables
	void draw()
	{
		// draw box here
	}
};

class Circle // NO PARENT
{
public:
	// some variables
	void draw()
	{
		// draw circle here
	}
};

class GeometricObjectInterface
{
public:
	// implement here
};

// And implement and templatized GeometricObject class.
int main()
{
	std::vector<GeometricObjectInterface*> obj_list;
	obj_list.push_back(new GeometricObject<Implement here>);
	obj_list.push_back(new GeometricObject<Implement here>);
	for (auto itr : obj_list)
		itr->draw();
	return 0;
}