#include <iostream>
#include <string>
#include "b_class.hpp"

using namespace std;

MyClass::MyClass(string name, string loc){
    this->name = name;
    this->loc = loc;
}

void MyClass::Show(){
    cout << this->name << " " << this->loc << endl;
}

