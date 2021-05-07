#include<iostream>
using namespace std;
int a[100][100];
int A[100][100];
int N ,M;

void cutN(int n,int H){
	for(int j=0;j<M;j++){
		if(A[n][j]>H){
		A[n][j]=H;
	}
	}
}


void cutM(int m,int h){
	for(int i=0;i<N;i++)
		if(A[i][m]>h)
		A[i][m]=h;
}


int main(){
	int T;
	cin>>T;
	for(int t=1;t<=T;t++){
		cin>>N>>M;
		// input
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				cin>>a[i][j];
				A[i][j]=100;
			}
		}
		// cutN
		for(int i=0;i<N;i++){
			int max=0;
			for(int j=0;j<M;j++){
				if(max<a[i][j]){
					max=a[i][j];
				}
			}
			cutN(i,max);
		}
		// cutM
		for(int j=0;j<M;j++){
			int max=0;
			for(int i=0;i<N;i++){
				if(max<a[i][j]){
					max = a[i][j];
				}
			}
			cutM(j,max);
		}
		// check
		bool yn=1;
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				if(a[i][j]!=A[i][j]){
					yn=0;
					break;
				}
			}
		}
		// output
		if(yn){
			cout<<"Case #"<<t<<": YES\n";
		}
		else{
			cout<<"Case #"<<t<<": NO\n";
		}
	}
	return 0;	
}
