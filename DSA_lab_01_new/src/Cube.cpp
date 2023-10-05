#include<iostream>
#include "Shape.h"
#include "Shape_3D.h"
#include "Cube.h"

using namespace std;

Cube::Cube(string name):Shape_3D(name)
{
    //constructor
}

Cube::Cube(string name, double side):Shape_3D(name)
{
   this->side=side;
}

void Cube::draw()
{
    cout<<"Drawing cube '"<<Cube::get_name()<<"'"<<endl;
}

void Cube::info()
{
    cout<<"I am a Cube '"<<Cube::get_name()<<"' of side : "<<side<<endl;
    Shape_3D::info();                 //function in parent class
    cout<<"My Volume is : "<<cal_volume()<<" cubic units"<<endl;
}

double Cube::cal_volume()
{
    return side*side*side;
}
Cube::~Cube()
{
    //dtor
}
