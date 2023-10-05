#ifndef SHAPE_3D_H
#define SHAPE_3D_H
#include "Shape.h"

class Shape_3D: public Shape
{
    public:
        Shape_3D(std::string name);
        virtual ~Shape_3D();
        virtual void info();            // only virtual function
        virtual double cal_volume()=0;  //pure virtual function

};

#endif // SHAPE_3D_H
