/*


Does s contain t ?
Send Feedback
Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
Return true or false.
Do it recursively.
E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
Input Format :
Line 1 : String s
Line 2 : String t
Output Format :
true or false
Sample Input 1 :
abchjsgsuohhdhyrikkknddg
coding
Sample Output 1 :
true
Sample Input 2 :
abcde
aeb
Sample Output 2 :
false

*/

#include <string.h>
#include <bits/stdc++.h>
using namespace std;

// int flag=0;
// bool help(char large[],char *small,int i,int j,int len2)
// {
//     if(small[i]=='\0' || large[j]=='\0' )
//     {
//         if(len2 ==flag )
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     else
//     {
//         if(small[i]==large[j])
//         {
//             flag++;
//             help(large,small,++i,++j,len2);
//         }
//         else
//         {
//             help(large,small,i,++j,len2);
//         }
        
//     }
    
// }

bool help( char large[] , char small[], int i, int j, int len1, int len2){
    if(j==len2){
        return true;
    }
    if(i==len1){
        return false;
    }
    if(large[i]==small[j]){

        return help(large,small,i+1,j+1,len1,len2);
    }
    else{
        return help(large,small,i+1,j,len1,len2);
    }
}


bool checksequenece(char large[] , char*small) 
{
    int len1=strlen(large);
    int len2=strlen(small);
    bool k= help(large,small,0,0,len1,len2);
    return k;
    
}


int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
