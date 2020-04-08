#include <iostream>
using namespace std;
bool isSemiPrime( int c )
{
    int a = 2, b = 0;
    while( b < 3 && c != 1 )
    {
	if( !( c % a ) )
	{ c /= a; b++; }
	else a++;
    }
    return b == 2;
}
int main( int argc, char* argv[] )
{
    int x;
    cin>>x;
	if( isSemiPrime( x ) )
	    cout << x << "YES" ;
	    else
            cout << "NO" ;

    return 0;
}
