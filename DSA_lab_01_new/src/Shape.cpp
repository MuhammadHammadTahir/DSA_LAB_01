#include<iostream>
#include "Shape.h"
using namespace std;
Shape::Shape(string name_arg)           //setter for name
{
   name=name_arg;
}

Shape::~Shape()
{
    //destructor
}
string Shape::get_name()                    //getter for name
{
    return name;
}
