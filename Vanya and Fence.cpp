#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t , s = 0 ;
    cin >> n >> t ;
    int a [ n ] ;
    for ( int i = 0 ; i < n ; i++ )
    {
    	cin >> a [ i ] ;
	}
    for ( int i = 0 ; i < n ; i++ )
    {
    	if ( a [ i ] > t )
    	{
    		s = s + 2 ;
		}
		else if ( a [ i ] <= t )
		{
			s = s + 1 ;
		}
	}
    cout << s << endl;
    return 0;
}