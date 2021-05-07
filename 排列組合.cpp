#include <iostream>
#include <stdlib.h>

using namespace std;

double f(double);
double f(double x){
    if(x==1)
       return 1;
    else
       x=x*f(x-1);
    return x;
}
    
int main(void){  
  double x,y,z;
  cout<<"C  x¨úy  x=? ";
  cin>>x;
  cout<<"C  x¨úy  y=? ";
  cin>>y;
  cout<<"C  "<<x<<" ¨ú "<<y<<" = ";
  
   if(x==0 || y==0){
    cout<<"1"; }
    else if(x==y){
         cout<<"1";}
    else{  
      z=x-y;
      x=f(x);
      y=f(y);
      z=f(z);
      cout<<x/(y*z)<<"\n";
     }
    system("Pause");
    return 0;  
}
