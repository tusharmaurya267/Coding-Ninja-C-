#include <iostream>
#include <cstring>
using namespace std;


bool helper ( char *input )
{
    char *c=input;
 	if( *input == 'a' )
    {
  		if(*(c+1)=='a')
        {
   			return helper(input+1);
  		}
  		else if(*(c+1)=='b')
        {
   			return helper(input+1);
  		}
  		if(*(c+1)==NULL)
        {
   			return 1;
  		}
  		else
    	{
   			return 0;
  		}
	}
 	else if ( *input == 'b' )
    {
  		if(*(c+1)=='b'&&*(c+2)=='a')
        {
   			return helper(input+2);
  		}
  		else if(*(c+1)=='b'&&*(c+2)==NULL)
        {
   			return 1;
  		}
  		else
        {
   			return 0;
  		}
 	}


    // if(input[0]=='a' && (input[1]==' '|| input[1]=='a')){
    //     helper(input+1);
    // }
    // if(input[0]=='a' && (input[1]=='b' && input[2]=='b')){
    //     helper(input+3);
    // }
    // if(input[0]=='b' && input[1]=='b' && (input[2]==' ' || input[2]=='a')){
    //     helper(input+2);
    // }
    // if(input[0]=='b' && input[1]=='a'){
    //     return false;
    // }
    // if(input[0]=='a' && input[1]=='b' && input[2]!='b'){
    //     return false;
    // }
    // if(input ==nullptr){
    //     return true;
    // }    
}

bool checkAB(char input[])
{
    
	if( *input == NULL )
    {
  		return 1;
 	}
    
    if ( input[0] !='a')
    {
        return 0;
    }
    helper ( input );

}


/*

bool check ( char input[] , int start)
{
    
        char ch = input[start];
        if ( ch == 'a')
        {
            if( input[start+1] == 'b')
            {
                return check ( input , start+1);
            }
            if( input[start+1] == 'a')
            {
                return check ( input , start+1);
            }
            if( input[start+1] == ' ')
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if (ch == 'b')
        {
            if( input[start+1] == 'b' && input[start+2] == ' ')
            {
                return 1;
            }
            if( input[start+1] == 'b' && input[start+2] == 'a')
            {
                return check ( input , start+2);
            }
            else
            {
                return 0;
            }
        }
    return 1;
    
}

bool checkAB(char input[]) {
	// Write your code here
    if ( input[0] =='\0' )
    {
        return 1;
    }
    if ( input[0] != 'a')
    {
        return 0;
    }
    return check ( input , 1);
}


int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}

*/