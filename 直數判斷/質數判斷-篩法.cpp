#include <iostream>
#include <cstdio>
using namespace std;
bool op[100001]; int s[100001]; int si = 0;
void set()
{
    for(int i = 0; i <= 100000; i++) op[i] = 1;
    op[0] = op[1] = 0;
    for(int i = 2; i <= 100000; i++)
        if( op[i] == 1 )
        {
            s[si++] = i;
            if( i <= 1000 )
            {
            for(int j = i*i; j <= 100000; j+=i)
                op[j] = 0; 
            } 
        }  
}
int main()
{
    set();  int n;
    while( scanf("%d", &n) != EOF )
    {
        if( n <= 100000 )
        {
            if( op[n] == 1 ) printf("借计\n"); 
            else printf("獶借计\n"); 
        }else
        {
            for(int i = 0; i < si && s[i]*s[i]<=n; i++)
                if( n % s[i] == 0 ){printf("獶借计\n");   goto abc;  }
               
            printf("借计\n");
            abc:;
               
        }
           
    }   
}
