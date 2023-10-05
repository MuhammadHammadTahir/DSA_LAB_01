#ifndef SPHERE_H
#define SPHERE_H
#include"Shape.h"
#include"Shape_3D.h"

class Sphere: public Shape_3D
{
    public:
        Sphere(std::string name);          //parametrized function with one argument
        Sphere(std::string name, double radius);          //parametrized function with one argument
        virtual void draw();        //virtual function
        virtual void info();        //virtual function
        virtual double cal_volume();        //virtual function
        virtual ~Sphere();

    private:
        double radius;
};

#endif // SPHERE_H
