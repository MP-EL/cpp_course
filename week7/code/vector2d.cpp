#include "vector2d.h"
#include <cmath>

v2d::v2d(double a, double b) {
    // Write your code here
    this->x = a;
    this->y = b;
    return;
}

v2d::v2d(const v2d & v) {
    // Write your code here
    this->x = v.x;
    this->y = v.y;
    return;
}

v2d::~v2d() {
    // Write your code here
    return;
}

v2d & v2d::operator=(const v2d &v) {
    // Write your code here
    this->x = v.x;
    this->y = v.y;
    return *this;
}

v2d & v2d::operator+(const v2d &v) {
    // Write your code here
    this->x = this->x + v.x;
    this->y = this->y + v.y;
    return *this;
}

double v2d::operator*(const v2d &v) {
    // Write your code here
    double num = this->x * v.x;
    double denom = this->y * v.y;
    return num + denom;
}

v2d & v2d::operator*(double k) {
    // Write your code here
    this->x = this->x * k;
    this->y = this->y *k;
    return *this;
}

double v2d::length() {
    // Write your code here
    double length = sqrt((this->x * this->x) + (this->y * this->y));
    return length;
}
