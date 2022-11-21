#ifndef __C_CLASS_HPP_INCLUDED__
#define __C_CLASS_HPP_INCLUDED__

#include <iostream>

using namespace std;

class Squares{
    int num, sqr;
    public:
        Squares(int a, int b){num = a; sqr = b;};
        void Show(){cout << num << ' ' << sqr << "\n";}
};

#endif

