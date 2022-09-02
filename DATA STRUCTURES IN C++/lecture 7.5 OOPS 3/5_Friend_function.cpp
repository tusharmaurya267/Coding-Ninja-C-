#include<bits/stdc++.h>
using namespace std;


class bus{
    public:
    void print();
};

class truck{
    private:
    int x;

    protected:
    int y;

    private:
    int z;

    // friend class bus

    friend void bus :: print();

    friend void test();
};

void bus :: print(){
    truck t;
    t.x;
    t.y;
    cout << t.x << " " << t.y << endl;
}

void test(){
    truck t;
    t.x;
    t.y;
    cout << t.x << " " << t.y << endl;
}

int main(){
    bus b;
    b.print();

    test();
}