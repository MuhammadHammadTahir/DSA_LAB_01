#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "Shape_2D.h"
#include<string>

class Circle : public Shape_2D
{
    public:
        Circle(std::string name);               //parametrized function with one argument
        Circle(std::string name,double radius);  //parametrized function with two argument
        virtual ~Circle();
        virtual void draw();        //virtual function
        virtual void info();        //virtual function
        virtual double cal_area();  //virtual function

    private:
         double radius;
};

#endif // CIRCLE_H
