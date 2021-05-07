#include<iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
            int vertex,edge;
            long long w[21][21] , d[21][21];
            for(int i=0;i<21;i++){
                    for(int j=0;j<21;j++){
                            w[i][j]=999999;
                            }
                    }
            for(int i=0;i<21;i++){
                    w[i][i]=0;
                    }
            cin>>vertex>>edge;
            for(int i=0;i<edge;i++){
                    int x,y;
                    cin>>x>>y;
                    cin>>w[x][y];
                    }
            for(int i=0;i<=vertex;i++){
                    for(int j=0;j<=vertex;j++){
                            d[i][j]=w[i][j];
                            }
                    }
            for(int k=0;k<=vertex;k++){
                    for(int i=0;i<=vertex;i++){
                            for(int j=0;j<=vertex;j++){
                                    if(d[i][k]+d[k][j]<d[i][j]){
                                                                d[i][j]=d[i][k]+d[k][j];
                                                                }
                                    }
                            }
                    }
            cout<<d[1][vertex]<<"\n";
            }
            return 0;
    }
