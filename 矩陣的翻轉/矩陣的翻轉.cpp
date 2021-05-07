#include<iostream>
using namespace std;
int main()
{   int array[100][100];
    int x,y;
    while (cin>> x>>y){
      for(int i=0;i<x;i++)
      for(int j=0;j<y;j++)
        cin>>array[i][j];
      for(int j=0;j<y;j++)
       {for(int i=0;i<x;i++)
         {cout<<array[i][j]<<" ";} 
       cout<<"\n";  
        }
     }
    return 0;
    }
