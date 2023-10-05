#ifndef CUBE_H
#define CUBE_H
#include "Shape.h"
#include "Shape_3D.h"

class Cube : public Shape_3D
{
    public:
        Cube(std::string name);   //parametrized function with one argument
        Cube(std::string name, double side); //parametrized function with two argument
        virtual void draw();            //virtual function
        virtual void info();            //virtual function
        virtual double cal_volume();    //virtual function
        virtual ~Cube();

    private:
        double side;
};

#endif // CUBE_H
