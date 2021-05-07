#include<iostream>
#include<algorithm>
using namespace std;
int n ;
int main()
{
    while(cin>>n)
    {
        int num[n] ;
        for(int i=0 ; i<n ; ++i) cin >> num[i] ;
        sort(num,num+n) ;
        if(n%2) cout << "A=" << num[n/2] ;
        else
        {
            cout << "A=" ;
            for(int i=num[n/2-1] ; i<=num[n/2] ; ++i)
            {
                cout << i ;
                if(i!=num[n/2]) cout << "¡B" ;
            }
        }
        cout << endl ;
    }
    return 0;
}
