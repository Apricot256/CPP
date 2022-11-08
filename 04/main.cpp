#include <iostream>
#include "BaseArea.hpp"
#include "Isosceles.hpp"
#include "Rectangle.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    Rectangle rec(3, 1);
    Isosceles iso(3, 1);
    cout << "rec.Area() : " << rec.Area() << endl;
    cout << "iso.Area() : " << iso.Area() << endl;
    return 0;
}
