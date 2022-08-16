#include<iostream>
using namespace std;

// class Complex
// {
//     private:
//     int imaginary;
//     int real;

//     public:

//     Complex(int real,int imaginary)
//     {
//         (*this).imaginary=imaginary;
//         (*this).real=real;
//     }

//     void print()
//     {
//         cout <<real <<" + i"<<imaginary << endl;
//     }

//     void plus(Complex const &c2)
//     {
//         (*this).imaginary=c2.imaginary+(*this).imaginary;
//         (*this).real=c2.real+(*this).real;
//     }
//     void multiply(Complex const &c2)
//     {
//         int r=(*this).real * (c2.real) - (*this).imaginary * (c2.imaginary);
//         int i=(*this).real * (c2.imaginary) + (*this).imaginary * (c2.real);
//         (*this).real=r;
//         (*this).imaginary=i;
//     }
// };

class ComplexNumbers {
    // Complete this class
    private:
    int real;
    int imaginary;
    
    public:
    ComplexNumbers(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void print(){
        cout <<real<<" + i"<<imaginary;
    }
    void plus(ComplexNumbers const &c2){
        this->real=this->real+c2.real;
        this->imaginary=this->imaginary+c2.imaginary;
    }
    
    void multiply(ComplexNumbers const &c2){
        int temp=this->real;
        this->real=(this->real*c2.real)-(this->imaginary*c2.imaginary);
        this->imaginary=(temp*c2.imaginary)+(c2.real*this->imaginary);
    }
};