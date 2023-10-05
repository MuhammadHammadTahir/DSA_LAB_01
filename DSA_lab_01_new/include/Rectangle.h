#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include "Shape_2D.h"

class Rectangle : public Shape_2D
{
    public:
        Rectangle(std::string name);     //parametrized function with one argument
        Rectangle(std::string name, double lenght,double width );    //parametrized function with many arguments
        virtual ~Rectangle();
        virtual void draw();                //virtual function
        virtual void info();                //virtual function
        virtual double cal_area();          //virtual function
    private:
        double lenght;
        double width;
};

#endif // RECTANGLE_H
