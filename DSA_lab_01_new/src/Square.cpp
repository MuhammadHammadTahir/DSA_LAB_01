#include<iostream>
#include "Shape.h"
#include "Shape_2D.h"
#include "Square.h"

using namespace std;

Square::Square(string name):Shape_2D(name)
{
    //constructor
}

Square::Square(string name, double side):Shape_2D(name)
{
   this->side=side;      //setting the value of side
}
void Square::draw()
{
    cout<<"Drawing Square '"<<Square::get_name()<<"'"<<endl;
}
void Square::info()
{
    cout<<"I am a Square '"<<Square::get_name()<<"' of side : "<<side<<endl;
    Shape_2D::info();
    cout<<"My Surface area is : "<<cal_area()<<" square units"<<endl;
}
double Square::cal_area()
{
    return side*side;
}
Square::~Square()
{
    //destructor
}
