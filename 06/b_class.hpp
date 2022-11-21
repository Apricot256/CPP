#ifndef __B_CLASS_HPP_INCLUDED__
#define __B_CLASS_HPP_INCLUDED__

#include <iostream>

using namespace std;

class A_type{
    double a, b;
    public:
        A_type(double x, double y) {
            a = x;
            b = y;
        }
        void Show() { cout << a << " " << b << "\n"; }
};

#endif