#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int x,y,;
    cout<<"Please input one number:";     cin>>x;
    cout<<"result:"<<endl;
    y=x;
    do{
        cout<<!(y % 2)<<endl;
        y=(int)y/2;
      }while(y>0);
    return 0;
}
