#include<iostream>
#include "Shape.h"
#include "Shape_2D.h"

using namespace std;

Shape_2D::Shape_2D(string name): Shape(name)
{
    //constructor
}

Shape_2D::~Shape_2D()
{
    //destructor
}
void Shape_2D::info()
{
    cout<<"I am a 2D shape"<<endl;
}

