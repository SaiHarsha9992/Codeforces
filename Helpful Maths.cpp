#include <bits/stdc++.h>
using namespace std ;
int main ( )
{
	string s ;
	cin >> s ;
    for ( int i = 0 ; i < s . length ( ) ; i++ )
    {
    	for ( int j = 0 ; j < s . length ( ) - 1 ; j ++ )
    	{
    		if ( s [ j ] != '+' ) 
    		{
    			if ( s [ j ] > s [ j + 2  ])
    		{
    			int t = s [ j ] ; 
    			s [ j ] = s [ j  + 2 ] ;
    			s [ j + 2 ] = t ;
			}
			}
		}
	}
	cout << s ;
}