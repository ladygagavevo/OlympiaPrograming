#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{	int x,y,z;
	while(cin>>x>>y)
	{z=(x*2+y)%3;
	  switch(z){
		case 0:
	  		cout<<"´¶³q\n";
	  		break;
	  	case 1:
	  		cout<<"¦N\n";
	  		break;
	  	case 2:
	  		cout<<"¤j¦N\n";
	  		break;
	  
	  }
	}
	system("pause");
	return 0;
	
}
