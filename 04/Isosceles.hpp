#ifndef __ISOSCELES_HPP_INCLUDED__
#define __ISOSCELES_HPP_INCLUDED__

#include "BaseArea.hpp"

class Isosceles:BaseArea{
    public:
        Isosceles(double, double);
        double Area();
};

#endif