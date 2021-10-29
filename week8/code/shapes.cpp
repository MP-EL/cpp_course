#include "shapes.h"
#include "iostream"
#include "cmath"

Shape::Shape(void){
}

Rectangle::Rectangle(double h, double w) {
    // Write your code here
    this->x = w;
    this->y = h;
}

Square::Square(double hw){
    this->z = hw;
}

Circle::Circle(double radius){
    this->r = radius;
}

double Rectangle::area(void){
    return this->x * this->y;
}

double Square::area(void){
    return this->z * this->z;
}

double Circle::area(void){
    return (this->r * this->r) * M_PI;
}

double Rectangle::perimeter(void){
    return (this->x + this->y) * 2;
}

double Square::perimeter(void){
    return this->z * 4;
}

double Circle::perimeter(void){
    return this->r * M_PI * 2;
}

double Rectangle::height(void){
    return this->y;
}

double Square::height(void){
    return this->z;
}

double Circle::height(void){
    return this->r * 2;
}

double Rectangle::width(void){
    return this->x;
}

double Square::width(void){
    return this->z;
}

double Circle::width(void){
    return this->r * 2;
}

double Rectangle::rotate(void){
    double temp1 = this->x;
    double temp2 = this->y;
    this->x = temp2;
    this->y = temp1;
    return 0;
}

double Square::rotate(void){
    return 0;
}

double Circle::rotate(void){
    return 0;
}