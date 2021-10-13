#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>

class fraction{
private:
    // Internal representation of a fraction as two integers
    int numerator;
    int denominator;
public:
    // Class constructor
    fraction(int n, int d){
        denominator = d;
        numerator = n;
    };

    // Methods to update the fraction
    fraction add(fraction f)
    {
        int n = this->numerator*f.denominator + f.numerator * this->denominator;
        int d = this->denominator * f.denominator;
        return fraction(n, d);
    }
    fraction mult(fraction f){
        int n = this->numerator * f.numerator;
        int d = this->denominator * f.denominator;
        return fraction(n,d);
    }
    fraction div(fraction f){
        int n = this->numerator * f.denominator;
        int d = this->denominator * f.numerator;
        return fraction(n,d);
    }
    fraction reduce(){
        int s = __gcd(this->numerator, this->denominator);
        int n = this->numerator / s;
        int d = this->denominator / s;
        return fraction(n, d);
    }
    // Display method
    void display()
    {
        cout << to_string(this->numerator) << " / " << to_string(this->denominator) << endl;
    }
};  

int main()
{   
    string input;
    int one = 0, two = 0, three = 0, four = 0, rows = 0;
    vector<int> container_a;
    string op;

    while (!cin.fail())
    {
        op = "";
        cin >> one;
        cin >> input;
        cin >> two;
        fraction a = fraction(one, two);
        cin >> op;
        cin >> three;
        cin >> input;
        cin >> four;
        fraction b = fraction(three,four);
        if (op == "div")
        {
            fraction c = a.div(b);
            fraction d = c.reduce();
            d.display();
        }
        if (op == "*")
        {
            fraction c = a.mult(b);
            fraction d = c.reduce();
            d.display();
        }
        if (op == "+")
        {
            fraction c = a.add(b);
            fraction d = c.reduce();
            d.display();
        }                
    }
    return 0;
}