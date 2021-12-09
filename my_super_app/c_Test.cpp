#include "c_Test.h"
#include<iostream>
void c_Test::print() const
{
	std::cout << "x = " << this->x << "\ty = " << this->y << "\n";
}
