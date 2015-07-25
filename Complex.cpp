// mathtools/Complex.cpp
// Here is where I implement the member function of the Complex class contained in
// Complex.h

#include <iostream>
#include <string>
#include <cmath>
#include "Complex.h"

// Using declarations
using namespace std;

void Complex::print() const{
    // Prints this complex number to std out
    cout << "This complex number is: ";
    int im_sgn = (y > 0) - (y < 0);
    if(im_sgn == 0)
        cout << x << endl;
    if(im_sgn == 1)
        cout << x << " + " << y << "i" << endl;
    if(im_sgn == -1)
        cout << x << " - " << im_sgn * y << "i" << endl;
}

string Complex::write() const{
    // Returns a formatted string representation of this complex number
    int im_sgn = (y > 0) - (y < 0);
    if(im_sgn == 0)
        return to_string(x);
    if(im_sgn == -1)
        return to_string(x) + " - " + to_string(im_sgn * y) + "i";
    else
        return  to_string(x) + " + " + to_string(y) + "i";
}

const Complex Complex::conj() const{
    // Returns the complex conjugate of this complex number
    return Complex(x,-1*y);
}

const double Complex:: mod() const{
    // Returns the modulus of this complex number
    return sqrt(pow(x,2) + pow(y,2));
}

const double Complex::arg() const{
    // Returns the argument of this complex number
    return atan(y/x);
}

const Complex Complex::operator+(const Complex& w) {
    // Returns the result of adding this complex number to input w
    return Complex(x + w.x, y + w.y);
}

const Complex Complex::operator-(const Complex& w) {
    // Returns the result of subtracting w from the complex number
    return Complex(x - w.x, y-w.y);
}

const Complex Complex::operator*(const Complex& w) {
    // Returns the result of multiplying this complex number by w
    return Complex(x*w.x - y*w.y, x*w.y + y*w.x);  
}

const Complex Complex::operator/(const Complex& w) {
    // Returns the result of dividing this complex number by w
    return Complex((x*w.x + y*w.y)/w.mod(), (y*w.x - x*w.y)/w.mod());
}
