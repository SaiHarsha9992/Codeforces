#include <iostream>
using namespace std;
int main ( )
{
	int n ;
	cin >> n ;
	int a [ n ] , c = 0 ;
	for ( int i = 0 ; i < n ; i++ )
	{
		cin >> a [ i ] ;
	}
	for ( int i = 0 ; i < n ; i++ )
	{
		if ( a [ i ] != a [ i + 1 ] ) 
		{
			c += 1 ;
		}
	}
	cout << c << endl;
	return 0 ;
	
}