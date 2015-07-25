// mathtools/Complex.h
// This introduces the Complex class, which is a fully functioning
// implementation of the complex numbers

#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
#include <cmath>

class Complex {
    public :
    // Constructor / Deconstructor
    Complex(double xx = 0, double yy = 0)
        : x(xx), y(yy) {}
    ~Complex() {}

    // Access Functions
    double Re() const { return x; }
    double Im() const { return y; }
    void print() const;
    std::string write() const;

    // Operators
    const Complex conj() const; // Complex Conjugation 
    const double mod() const;   // Complex Modulus
    const double arg() const;   // Complex Argument
    const Complex operator+(const Complex& w);
    const Complex operator-(const Complex& w);
    const Complex operator*(const Complex& w);
    const Complex operator/(const Complex& w);

    private :
    double x; // Real Part
    double y; // Imaginary Part
};

#endif // COMPLEX_H ///~
