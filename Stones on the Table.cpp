#include <iostream>
using namespace std ;
#include <string>
int main ()
{
	int n , c = 0 ;
	string s ;
	cin >> n ;
	cin >> s ;
	for (int i = 0 ; i < n ; i++ )
	{
		if ( s [ i ] == s [ i + 1 ] ) 
		{
			c += 1 ;	
		}	
	} 
	cout << c ;
}