#include<bits/stdc++.h>
using namespace std;


void print_subset(string input,string output){
    if(input.length()==0){
        cout << output << endl;
        return;
    }
    string output1=output;
    string output2=output+input[0];
    input.erase(input.begin()+0);
    print_subset(input,output1);
    print_subset(input,output2);
    return;
}

int main(){
    string input;
    cin >> input;
    string output="";
    print_subset(input,output);
    return 0;
}