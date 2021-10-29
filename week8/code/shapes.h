#ifndef __sha__
#define __sha__

class Shape{
    public:
        Shape(void);
        virtual double area(void) = 0;

        virtual double perimeter(void) = 0;

        virtual double height(void) = 0;

        virtual double width(void) = 0;

        virtual double rotate(void) = 0;

    protected:
        double x, y, z, r;

};

class Rectangle:public Shape{

    public:
       
        // Standard constructor: builds a vector (a,b)
        Rectangle(double h, double w);
        double area(void);
        double perimeter(void);
        double height(void);
        double width(void);
        double rotate(void);
};

class Square : public Shape{

    public:
        // Standard constructor: builds a vector (a,b)
        Square(double hw);
        double area(void);
        double perimeter(void);
        double height(void);
        double width(void);
        double rotate(void);
};

class Circle : public Shape{

    public:
        // Standard constructor: builds a vector (a,b)
        Circle(double radius);
        double area(void);
        double perimeter(void);
        double height(void);
        double width(void);
        double rotate(void);
};

// #include "shapes.cpp"

#endif
