#ifndef __RECTANGLE_HPP_INCLUDED__
#define __RECTANGLE_HPP_INCLUDED__

#include "BaseArea.hpp"

class Rectangle:BaseArea{
    public:
        Rectangle(double, double);
        double Area();
};

#endif