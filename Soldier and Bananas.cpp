#include <iostream>
using namespace std ;
int main ()
{
	int k , n , w ;
	long long a = 0 ;
	cin >> k >> n >> w ;
	for ( int i = 1 ; i <= w ; i++ )
	{
		a = a + i * k ;
	}
	if(a<= n){
		cout <<0<<"\n";
	}
	else 
	cout << a - n << "\n";
}