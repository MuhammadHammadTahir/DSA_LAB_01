#ifndef SHAPE_2D_H
#define SHAPE_2D_H
#include "Shape.h"

class Shape_2D : public Shape
{
    public:
        Shape_2D(std::string name);
        virtual ~Shape_2D();
        virtual void info();            //only virtual function
        virtual double cal_area()=0;     //pure virtual function

};

#endif // SHAPE_2D_H
