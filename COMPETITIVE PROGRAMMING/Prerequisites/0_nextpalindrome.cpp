#include<bits/stdc++.h>
using namespace std;

string NextPalindrome(char* num){
    int l=1;int d=0;
    
    for(int i=strlen(num)-1;i>=0;--i){
        
        
        int no=(int)num[i]-48;
        d=d+(no*l);
        l=l*10;
    }

    int flag=0;
    int j=d;
    while(flag==0){

        int so=j;
        int no=j;
        int sum=0;
        while(no!=0){
            int d=no%10;
            sum=sum*10+d;
            no=no/10;
        }

        
        if(sum==so){
            flag=1;
            break;
        }
        j++;
        
    }
    string str=to_string(j);
    return str;
}



int main(){
    char num[5];
    cin >> num;
    string p=NextPalindrome(num);
    cout << p;
    return 0;
    
}