#include <iostream>
using namespace std ;
int main ( )
{
	int n  ;
	cin >> n ;
	int a , b , c , f = 0 ;
	while ( n-- )
	{
		cin >> a >> b >> c ;
		if ( a + b + c >= 2 )
		{
			f+=1 ;
		}
	}
	cout << f << endl ;
	
}