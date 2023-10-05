#include<iostream>
#include "Shape.h"
#include "Shape_2D.h"
#include "Circle.h"

using namespace std;

Circle::Circle(string name):Shape_2D(name)
{
    //constructor without arguments
}

Circle::Circle(string name, double radius):Shape_2D(name)
{
    this->radius=radius;
}
void Circle::draw()
{
    cout<<"Drawing Circle '"<<Circle::get_name()<<"'"<<endl;
}
void Circle::info()
{
    cout<<"I am a Circle '"<<Circle::get_name()<<"' of radius : "<<radius<<endl;
    Shape_2D::info();
    cout<<"My Surface area is : "<<cal_area()<<" square units"<<endl;

}
double Circle::cal_area()
{
    return (radius*radius)*(3.14159);
}

Circle::~Circle()
{
    //destructor
}

