#include <iostream>
using namespace std;




#include <iostream>
using namespace std;

class Polynomial
{
    public:
    int *degCoeff;
    int capacity;

    Polynomial()
    {
        (*this).capacity=5;
        (*this).degCoeff=new int[capacity+1];
    }
    Polynomial(int capacity)
    {
        (*this).capacity=capacity;
        (*this).degCoeff=new int[capacity+1];
    }
    Polynomial (Polynomial const &p)
    {
        (*this).capacity=p.capacity;
        int *newdeg=new int[p.capacity+1];
        for(int i=0;i<=p.capacity;i++)
        {
            newdeg[i]=p.degCoeff[i];
        }
        (*this).degCoeff=newdeg;
    }

    void setCoefficient(int deg,int coef)
    {
        if(deg>capacity)
        {
            int newcapacity=deg;
            int *newdeg=new int[newcapacity+1];
            for(int i=0;i<=capacity;i++)
            {
                newdeg[i]=degCoeff[i];
            }
            (*this).degCoeff=newdeg;
            (*this).capacity=newcapacity;
        }
        degCoeff[deg]=coef;
    }

    Polynomial operator+(Polynomial const & P)
    {
        int newcap=max((*this).capacity,P.capacity);
        Polynomial P3(newcap);

        for(int i=0;i<=newcap;i++)
        {
            if(i<=(*this).capacity && i<=P.capacity)
            {
                P3.degCoeff[i]=(*this).degCoeff[i]+P.degCoeff[i];
            }
            else if(i<=(*this).capacity)
            {
                P3.degCoeff[i]=(*this).degCoeff[i];
            }
            else if(i<=P.capacity)
            {
                P3.degCoeff[i]=P.degCoeff[i];
            }
        }
         return P3;
    }
    Polynomial operator-(Polynomial const & P)
    {
        int newcap=max((*this).capacity,P.capacity);
        Polynomial P3(newcap);

        for(int i=0;i<=newcap;i++)
        {
            if(i<=(*this).capacity && i<=P.capacity)
            {
                P3.degCoeff[i]=(*this).degCoeff[i]-P.degCoeff[i];
            }
            else if(i<=(*this).capacity)
            {
                P3.degCoeff[i]=(*this).degCoeff[i];
            }
            else if(i<=P.capacity)
            {
                P3.degCoeff[i]=-P.degCoeff[i];
            }
        }
        return P3;
    }
    Polynomial operator*(Polynomial const & P)
    {
        int newcap=(*this).capacity+P.capacity;
        Polynomial P3(newcap);

        for(int i=0;i<=(*this).capacity;i++)
        {
            for(int j=0;j<=P.capacity;j++)
            {
                P3.degCoeff[i+j]= P3.degCoeff[i+j]+(*this).degCoeff[i]*P.degCoeff[j];
            }
        }
        return P3;
    }
    void operator=(Polynomial const & P)
    {
        int *newdeg=new int[P.capacity+1];
        for(int i=0;i<=capacity;i++)
        {
            newdeg[i]=P.degCoeff[i];
        }
        (*this).degCoeff=newdeg;
        (*this).capacity=P.capacity;

    }


    void print()
    {
        for(int i=0;i<=(*this).capacity;i++)
        {
            if(degCoeff[i]!=0)
            {
                cout << degCoeff[i] << "x" << i <<" ";
            }
        }
        cout << endl;
    }
};






/*
class Polynomial {

    public:
    int *degCoeff;      // Name of your array (Don't change this)
    int capacity;
    
    Polynomial(){
        this->degCoeff=new int[6];
        this->capacity=5;
    }
    //Making paramaterized constructor for defining with capacity
    Polynomial (int capacity){
        this->degCoeff=new int[capacity+1];
        this->capacity=capacity;
    }
    
    Polynomial (Polynomial const &p){
        int *newdeg=new int[p.capacity+1];
            
        for(int i=0;i<=p.capacity;i++)
            newdeg[i]=p.degCoeff[i];
            
        this->degCoeff=newdeg;
        
        this->capacity=p.capacity;
    }
    
    void setCoefficient(int deg,int coef){
        if(deg>capacity){
            int newcapacity=deg;
            int *newdeg=new int[newcapacity+1];
            //Copy the contents from original to new
            for(int i=0;i<=capacity;i++)
                newdeg[i]=degCoeff[i];
            
            this->degCoeff=newdeg;
            this->capacity=newcapacity;
            //Set the new coeff;
        }
        degCoeff[deg]=coef;
    }
    
    Polynomial operator+(Polynomial const &P2){
        
        int newcap=max(this->capacity,P2.capacity);
        
        Polynomial P3(newcap);
        
        for(int i=0;i<=newcap;i++){
            if(i<=capacity && i<=P2.capacity)
                P3.degCoeff[i]=this->degCoeff[i]+P2.degCoeff[i];
            else if(i<=capacity)
                P3.degCoeff[i]=this->degCoeff[i];
            else 
                P3.degCoeff[i]=P2.degCoeff[i];
        }
        
        return P3;
    }
    
    Polynomial operator-(Polynomial const &P2){
        
        int newcap=max(this->capacity,P2.capacity);
        Polynomial P3(newcap);
        
        for(int i=0;i<=newcap;i++){
            if(i<=capacity && i<=P2.capacity)
                P3.degCoeff[i]=this->degCoeff[i]-P2.degCoeff[i];
            else if(i<=capacity)
                P3.degCoeff[i]=this->degCoeff[i];
            else 
                P3.degCoeff[i]=-P2.degCoeff[i];
        }
        
        return P3;
    }
    
    Polynomial operator*(Polynomial const &P2){
        
        int newcap=this->capacity+P2.capacity;
        Polynomial P3(newcap);
        
        for(int i=0;i<=this->capacity;i++){
            
            for(int j=0;j<=P2.capacity;j++){
                P3.degCoeff[i+j]+=this->degCoeff[i]*P2.degCoeff[j];
            }
        }
        return P3;
    }
    
    void operator=(Polynomial const &p){
        int *newdeg=new int[p.capacity+1];
        //Copy the contents
        for(int i=0;i<p.capacity;i++)
            newdeg[i]=p.degCoeff[i];
            
        
        this->degCoeff=newdeg;
        
        this->capacity=p.capacity;
    }
    
    void print()
    {
        
        for(int i=0;i<=this->capacity;i++){
            if(degCoeff[i]!=0)
                cout<<degCoeff[i]<<"x"<<i<<" ";
        }
        cout<<endl;
    }  
};

*/




