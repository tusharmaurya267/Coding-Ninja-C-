#include<iostream>
#include<climits>
using namespace std;

class Fraction
{

    public:
    int numerator;
    int denominator;


    Fraction(int numerator,int denominator)
    {
        (*this).numerator=numerator;
        (*this).denominator=denominator;
    }

    void print()
    {
        cout << (*this).numerator << "/" << (*this).denominator;
    }

    void simplify()
    {
        int hcf=1;
        int end= min((*this).denominator,(*this).numerator);
        int i=1;
        while(i<=end)
        {
            if((*this).denominator%i==0 && (*this).numerator%i==0)
            {
                hcf=i;
            }
            i++;
        }
        (*this).denominator=(*this).denominator/hcf;
        (*this).numerator=(*this).numerator/hcf;
        
    }

    void add(Fraction const &F2)
    {
        int lcm= (*this).denominator * F2.denominator;
        int x=lcm/(*this).denominator;
        int y=lcm/F2.denominator;

        int num=(*this).numerator * x + F2.numerator * y;

        (*this).numerator=num;
        (*this).denominator=lcm;

        (*this).simplify();

    }
};