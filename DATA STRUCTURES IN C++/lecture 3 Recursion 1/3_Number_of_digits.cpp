#include<iostream>
using namespace std;

int c=1;
int count(int n){
    // if(n >= 0 && n<=9 )
    // {
    //     return c;
    // }
    // else
    // {
	// 	count(n / 10);
    // 	c++;
    // }



    if(n <=9)
    {
        return 1;
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}

int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}
