#include <bits/stdc++.h>
using namespace std;


void solve(string input,string output){
    if(input.length()==0){
        cout << output << endl;
        return;
    }
    char ch1= tolower(input[0]);
    char ch2= toupper(input[0]);
    string output1=output + ch1;
    string output2=output + ch2;
    input.erase(input.begin()+0);
    solve(input,output1);
    solve(input,output2);
    return;
}


int main(){
    string input,output="";
    cin >> input;
    solve(input,output);
    return 0;
}