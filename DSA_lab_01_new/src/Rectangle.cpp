#include<iostream>
#include"Shape.h"
#include"Shape_2D.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(string name):Shape_2D(name)
{
    //constructor
}

Rectangle::Rectangle(string name,double lenght,double width):Shape_2D(name)
{
   this->lenght=lenght;
   this->width=width;
}

void Rectangle::draw()
{
    cout<<"Drawing Rectangle '"<<Rectangle::get_name()<<"'"<<endl;
}

void Rectangle::info()
{
    cout<<"I am a Rectangle '"<<Rectangle::get_name()<<"' of lenght : "<<lenght<<", and width : "<<width<<endl;
    Shape_2D::info();
    cout<<"My Surface area is : "<<cal_area()<<" square units"<<endl;
}

double Rectangle::cal_area()
{
    return lenght*width;
}

Rectangle::~Rectangle()
{
    //dtor
}
