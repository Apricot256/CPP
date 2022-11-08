#include "Rectangle.hpp"
#include "BaseArea.hpp"

Rectangle::Rectangle(double w, double h){
    this->height = h;
    this->width = w;
}

double Rectangle::Area(){
    return this->height * this->width;
}