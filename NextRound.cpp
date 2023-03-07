#include <iostream>
using namespace std ;
int main ( ) 
{
	int n , k ;
	cin >> n >> k ;
	int a [ n ] , c = 0 ;
	for ( int i = 0 ; i < n ; i++ )
	{
		cin >> a [ i ] ;
	}
	k = a [ k - 1 ] ;
	   for ( int i = 0 ; i < n ; i++ )
	   {
	   	  if ( a [ i ] >=  k && a [ i ] > 0 )
	   	  {
	   	  	c = c + 1 ;
	      }
	      else 
	      {
	      	break ;
		  }
	   }	
	cout << c ;
 } 