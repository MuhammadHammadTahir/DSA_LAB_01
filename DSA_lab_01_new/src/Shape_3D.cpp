#include<iostream>
#include "Shape.h"
#include "Shape_3D.h"
using namespace std;
Shape_3D::Shape_3D(string name):Shape(name)
{
    //constructor setting
}

Shape_3D::~Shape_3D()
{
    //destructor settings
}
void Shape_3D::info()
{
    cout<<"I am a 3D shape"<<endl;
}
