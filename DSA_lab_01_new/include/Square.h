#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
#include "Shape_2D.h"

class Square : public Shape_2D
{
    public:
        Square(std::string name); //parametrized function with one argument
        Square(std::string name, double side); //parametrized function with two arguments
        virtual ~Square();
        virtual void draw();                //virtual function
        virtual void info();                //virtual function
        virtual double cal_area();          //virtual function

    private:
         double side;
};

#endif // SQUARE_H
