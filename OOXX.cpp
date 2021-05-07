#include<iostream>
using namespace std;

int main () {
	char m[4][4];
	int n;
	cin>>n;
	for(int g=1;g<=n;g++){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				cin>>m[i][j];
			}
		}
		bool xwin=0;
		bool owin=0;
		bool done=1;
		for(int i=0;i<4&&!xwin&&!owin;i++){
			int xsum=0, osum=0;
			for(int j=0;j<4;j++){
				if(m[i][j]=='O'){
					osum++;
				}
                else if(m[i][j]=='X'){
                	xsum++;
                }			
				else if(m[i][j]=='T'){
					xsum++;
					osum++;
				}
				else if(m[i][j]=='.'){
					done=0;
				}
			}
			if(osum==4){
				owin=1;
			}
			if(xsum==4){
				xwin=1;
			}
		}
		for(int j=0;j<4&&!xwin&&!owin;j++){
			int xsum=0, osum=0;
			for(int i=0;i<4;i++){
				if(m[i][j]=='O'){
					osum++;
				}
                else if(m[i][j]=='X'){
                	xsum++;
                }			
				else if(m[i][j]=='T'){
					xsum++;
					osum++;
				}
				else if(m[i][j]=='.'){
					done=0;
				}
			}
			if(osum==4){
				owin=1;
			}
			if(xsum==4){
				xwin=1;
			}
		}
		int xsum=0, osum=0;
		for(int j=0;j<4&&!xwin&&!owin;j++){
			if(m[j][j]=='O'){
				osum++;
			}
            else if(m[j][j]=='X'){
               	xsum++;
            }			
			else if(m[j][j]=='T'){
				xsum++;
				osum++;
			}
			else if(m[j][j]=='.'){
				done=0;
			}
		}
		if(osum==4){
			owin=1;
		}
		if(xsum==4){
			xwin=1;
		}
		xsum=0; osum=0;
		for(int j=0;j<4&&!xwin&&!owin;j++){
			if(m[j][3-j]=='O'){
				osum++;
			}
            else if(m[j][3-j]=='X'){
               	xsum++;
            }			
			else if(m[j][3-j]=='T'){
				xsum++;
				osum++;
			}
			else if(m[j][3-j]=='.'){
				done=0;
			}
		}
		if(osum==4){
			owin=1;
		}
		if(xsum==4){
			xwin=1;
		}
		if(owin)cout<<"Case #"<<g<<": "<<"O won\n";	
		else if(xwin)cout<<"Case #"<<g<<": "<<"X won\n";
		else if(done)cout<<"Case #"<<g<<": "<<"Draw\n";
		else cout<<"Case #"<<g<<": "<<"Game has not completed\n";
	}
	return 0;
}
