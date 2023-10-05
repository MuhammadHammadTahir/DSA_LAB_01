#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape
{
    public:
        Shape(std::string name_arg);
        virtual ~Shape();
        virtual void draw()=0;      //pure virtual function
        virtual void info()=0;      //pure virtual function
        std::string get_name();
    private:
         std::string name;
};

#endif // SHAPE_H
