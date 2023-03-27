#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int c = 0 ,l = 0 ;
	for(int i = 0 ; i < s.size() ; i++ )
	{
	    if ( isupper ( s [ i ] ) ) 
		{
	        c++;
	    }
		else
		{
	        l++;
	    }
	}
	if(c>l)
	{
	    char ch;
	    for ( int i = 0 ; i < s.size() ; i++ )
		{
	        ch = toupper ( s [ i ] ) ;
	        cout << ch ;
	    }
	}
	else
	{
	    char ch ;
	    for ( int i = 0 ; i < s.size() ; i++ )
		{
	        ch = tolower ( s [ i ] ) ;
	        cout << ch ;
	    }
	}
	return 0;
}