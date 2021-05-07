#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int x;
    while( cin >> x )
    {
        if( x == 2 )
            printf( "質數\n" );
        else if( x % 2 == 0 )
            printf( "非質數\n" );
        else
        {
            int primeis = 1;
            for( int i = 3 ; i <= sqrt(x); i++ )
            {
                if( x % i == 0 )
                {
                    printf( "非質數\n");
                    primeis = 0;
                }
            }
            if( primeis )
                printf( "質數\n" );
        }
    }
    
    return 0;
}
