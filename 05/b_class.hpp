#ifndef __B_CLASS_HPP_INCLUDED__
#define __B_CLASS_HPP_INCLUDED__

#include <string>

using namespace std;

class MyClass{
    private:
        string name, loc;
    public:
        MyClass(string, string);
        void Show();
};

#endif

