#include <iostream>
using namespace std;
int main ( )
{
	int t , p , cap , c = 0 ;
    cin >> t ;
    while ( t-- ) 
    {
        cin >> p >> cap ;
        if(cap-p>=2)
            c++;
    }
    cout<<c<<endl;
    return 0;
}