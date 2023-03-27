#include <iostream>
using namespace std ;
int main ()
{
	int n , a ;
	cin >> n ;
	a = n / 5 ;
	if ( n % 5 != 0 )
	{
		a += 1 ;
	}
	cout << a <<"\n";
}