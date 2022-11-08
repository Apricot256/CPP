#include "Isosceles.hpp"
#include "BaseArea.hpp"

Isosceles::Isosceles(double w, double h){
    this->height = h;
    this->width = w;
}

double Isosceles::Area(){
    return 0.5*(this->height * this->width);
}