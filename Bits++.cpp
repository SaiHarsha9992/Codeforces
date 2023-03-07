#include <iostream>
using namespace std ;
int main ( )
{
    int t , x = 0 ; 
    cin >> t ;
    while ( t-- )
    {
    char s [ 100 ] ;
    cin >> s ;
    if ( s [ 1 ] == '+' )
    {
        x = x + 1 ;
    }
    else if ( s [ 1 ] == '-' )
    {
        x = x - 1 ;
    }
    }
    cout << x ;
}