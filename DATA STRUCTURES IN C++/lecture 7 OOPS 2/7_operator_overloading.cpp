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
        cout << (*this).numerator << "/" << (*this).denominator << endl;
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

    Fraction add(Fraction const &F2) //we are storing the changes in a separate function
    {
        int lcm= (*this).denominator * F2.denominator;
        int x=lcm/(*this).denominator;
        int y=lcm/F2.denominator;

        int num=(*this).numerator * x + F2.numerator * y;

        Fraction f(num,lcm);
        f.simplify();
        return f;
    }


    Fraction operator+(Fraction const &F2) //we are storing the changes in a separate function
    {
        int lcm= (*this).denominator * F2.denominator;
        int x=lcm/(*this).denominator;
        int y=lcm/F2.denominator;

        int num=(*this).numerator * x + F2.numerator * y;

        Fraction f(num,lcm);
        f.simplify();
        return f;
    }


    Fraction multiply(Fraction const &F2) const //we are storing the changes in a separate function
    {
        
        int num=(*this).numerator*F2.numerator;
        int denom=(*this).denominator*F2.denominator;
        Fraction f(num,denom);
        f.simplify();
        return f;
    }

    Fraction operator*(Fraction const &F2) const //we are storing the changes in a separate function
    {
        
        int num=(*this).numerator*F2.numerator;
        int denom=(*this).denominator*F2.denominator;
        Fraction f(num,denom);
        f.simplify();
        return f;
    }


    bool operator==(Fraction const &F2)  
    {
        return((*this).numerator==F2.numerator  &&  (*this).denominator==F2.denominator);
    }

    
    void operator--() 
    {
        (*this).numerator=(*this).numerator - (*this).denominator;
        simplify();
    }


    Fraction & operator++() // '&' is added so that the value of (++f) is stored in the current object,not any new buffer memory
    {                       // because if it is stored in a buffer memory,the changes wont be reflected if we perform ++(++f).
        (*this).numerator=(*this).numerator + (*this).denominator;
        simplify();

        return *this;
    }


    Fraction operator++(int) 
    {
        Fraction fnew((*this).numerator,(*this).denominator);
        (*this).numerator=(*this).numerator+(*this).denominator;
        (*this).simplify();
        fnew.simplify();
        return fnew;
    }


    Fraction & operator+=(Fraction const &F2)
    {
        int lcm= (*this).denominator * F2.denominator;
        int x=lcm/(*this).denominator;
        int y=lcm/F2.denominator;
        int num=(*this).numerator * x + F2.numerator * y;
        (*this).numerator=num;
        (*this).denominator=lcm;
        (*this).simplify();

        return *this;
    }

};