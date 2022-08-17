#include <iostream>
using namespace std;

class Dynamic
{
    private:
    int *arr;
    int capacity;
    int next_index;
    public:

    Dynamic()       // constructor
    {

        capacity=5;
        arr=new int[capacity];
        next_index=0;

    }

    Dynamic(Dynamic const &d)   //copy construtor
    {
    //  (*this).arr=d.arr;                  //shallow copy
        (*this).arr=new int[d.capacity];    //deep copy
        for(int i=0;i<d.next_index;i++)
        {
            (*this).arr[i]=d.arr[i];
        }
        (*this).capacity=d.capacity;
        (*this).next_index=d.next_index;
    
    }

    void operator=(Dynamic const & d) //=assignment operator
    {
    //  (*this).arr=d.arr;                  //shallow copy
        (*this).arr=new int[d.capacity];    //deep copy
        for(int i=0;i<d.next_index;i++)
        {
            (*this).arr[i]=d.arr[i];
        }
        (*this).capacity=d.capacity;
        (*this).next_index=d.next_index;
    }



    /*void array_size(int capacity,int *arr)
    {
        int *arrnew=new int[capacity*2];
        for(int i=0;i<capacity;++i)
        {
            arrnew[i]=arr[i];
        }
        delete [] arr;
        arr=arrnew;
        capacity=capacity*2;

    }*/

    void add_element(int a)
    {
        if(next_index==capacity)
        {
            int *arrnew=new int[capacity*2];
            for(int i=0;i<=next_index;i++)
            {
                arrnew[i]=arr[i];
            }
            delete [] arr;
            arr=arrnew;
            capacity=capacity*2;
            /*array_size(capacity,arr);*/
        }
        arr[next_index]=a;
        next_index++;
    }

    void random_add(int a,int i)
    {
        if(next_index>i)
        {
            arr[i]=a;
        }
        else
        {
            return;
        }   
    }
    void print()
    {
        for(int i=0;i<next_index;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

