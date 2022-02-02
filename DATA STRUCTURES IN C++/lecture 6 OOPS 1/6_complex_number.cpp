#include<iostream>
using namespace std;

class Complex
{
    private:
    int imaginary;
    int real;

    public:

    Complex(int real,int imaginary)
    {
        (*this).imaginary=imaginary;
        (*this).real=real;
    }

    void print()
    {
        cout <<real <<" + i"<<imaginary << endl;
    }

    void plus(Complex const &c2)
    {
        (*this).imaginary=c2.imaginary+(*this).imaginary;
        (*this).real=c2.real+(*this).real;
    }
    void multiply(Complex const &c2)
    {
        int r=(*this).real * (c2.real) - (*this).imaginary * (c2.imaginary);
        int i=(*this).real * (c2.imaginary) + (*this).imaginary * (c2.real);
        (*this).real=r;
        (*this).imaginary=i;
    }
};