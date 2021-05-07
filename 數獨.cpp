#include<iostream>
using namespace std;

int main () {
	int m[9][9];
	while(cin>>m[0][0]){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				if(i==0&&j==0)continue;
				cin>>m[i][j];
			}
		}
		bool v=1;
		for(int i=0;i<9&&v;i++){
			int xsum=0, ysum=0;
			for(int j=0;j<9;j++){
				xsum= xsum+m[i][j];
				ysum= ysum+m[j][i];
			}
			if (xsum!=45||ysum!=45){
				v=0;
			}
		}
		for(int x=0;x<3&&v;x++){
			for(int y=0;y<3&&v;y++){
				int sum=0;
				for(int i=0;i<3;i++){
					for(int j=0;j<3;j++){
						sum=sum+m[3*x+i][3*y+j];
					}
				}
				if (sum!=45)v=0;
			}
		}
		if(v)cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}
