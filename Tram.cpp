#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
	int n , c = 0 , p = 0 , a , b ;
	cin >> n ;
	while ( n-- )
	{
		cin >> a >> b ;
		c -= a ;
		c += b ;
		if ( c > p )
		{
			p = c ;
		}
	}
	cout << p ;
}