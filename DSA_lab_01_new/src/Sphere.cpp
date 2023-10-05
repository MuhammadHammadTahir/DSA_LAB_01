#include<iostream>
#include "Shape.h"
#include "Shape_3D.h"
#include "Sphere.h"
#include <cmath>

using namespace std;

Sphere::Sphere(string name):Shape_3D(name)
{
    //constructor
}
Sphere::Sphere(string name,double radius):Shape_3D(name)
{
   this->radius=radius;     //setting the radius
}
void Sphere::draw()
{
    cout<<"Drawing sphere '"<<Sphere::get_name()<<"'"<<endl;
}
void Sphere::info()
{
    cout<<"I am a Sphere '"<<Sphere::get_name()<<"' of radius : "<<radius<<endl;
    Shape_3D::info();                 //function in parent class
    cout<<"My Volume is : "<<cal_volume()<<" cubic units"<<endl;
}
double Sphere::cal_volume()
{
    return (4.0/3.0) * 3.14159 * radius*radius*radius;
}
Sphere::~Sphere()
{
    //dtor
}
