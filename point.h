#ifndef POINT_H
#define POINT_H

#include <iostream>

class example_type
{
  public:
	int i;
	example_type() : i(0) { std::cout << "example_type default constructor has been called\n"; }
	example_type(int i) : i(i) {}
	example_type(const example_type &et) : i(et.i)
	{
		std::cout << "example_type("<< this->i<<") copy constructor has been called\n";
	}
	example_type &operator=(const example_type &et)
	{
		this->i = et.i;
		std::cout << "example_type("<<this->i<<") copy assignment operator has been called\n";
		return *this;
	}
};

template <typename T = int> class point
{
  public:
	T x;
	T y;
	point(T x, T y) : x(x), y(y)
	{
		// x and y are defined via initialization
	}
};

template <typename T = int> class pointv2
{
  public:
	T x;
	T y;
	pointv2(T x, T y) : x(x)
	{
		// this->y is of undefined value here, if T is an int, otherwise, y has been default
		// constructed.
		this->y = y; // y is defined via assignment
	}
};
/*
	Saying that point and pointv2 have equivalent constructors is naive and should not be
	the answer to a question on a quiz. If instead of an int, we used the type
 */
#endif