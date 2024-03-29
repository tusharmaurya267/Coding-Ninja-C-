/*

Split Array
Send Feedback
Given an integer array A of size N, check if the input array can be splitted in two parts such that -
- Sum of both parts is equal
- All elements in the input, which are divisible by 5 should be in same group.
- All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
- Elements which are neither divisible by 5 nor by 3, can be put in any group.
Groups can be made with any set of elements, i.e. elements need not to be continuous. And you need to consider each and every element of input array in some group.
Return true, if array can be split according to the above rules, else return false.
Note : You will get marks only if all the test cases are passed.
Input Format :
Line 1 : Integer N (size of array)
Line 2 : Array A elements (separated by space)
Output Format :
true or false
Constraints :
1 <= N <= 50
Sample Input 1 :
2
1 2
Sample Output 1 :
false
Sample Input 2 :
3
1 4 3
Sample Output 2 :
true

*/



#include <iostream>
using namespace std;



bool helper(int *input ,int size, int five , int three ,int i){
    if(i== size){
        if(five==three){
        	return true;
    	}
        else{
            return false;
        }
    }
    if(input[i]%3==0 && input[i]%5!=0){
        return helper(input , size, five, three+input[i],i+1);
    }
    if(input[i]%5==0){
        return helper(input , size, five+input[i], three,i+1);
    }
    else{
        bool ir=helper(input , size, five, three+input[i],i+1);
        bool vr=helper(input , size, five+input[i], three,i+1);
        return ir||vr;
    }
}

bool splitArray(int *input, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(size==0)return true;
    return helper(input,size,0,0,0);
    
}



int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}
