#include<iostream>
#define WALL 2
#define ROAD 0
#define PASS 1
using namespace std;
typedef struct{
	int x;
	int y;
} Point;
Point pt(int x, int y) {
    Point p = {x, y};
    return p;
}
int visit(int maze[][12], Point start, Point end) {
    if(!maze[start.x][start.y]) {
         maze[start.x][start.y] = 1;
         if(!maze[end.x][end.y] && 
            !(visit(maze, pt(start.x, start.y + 1), end) || 
              visit(maze, pt(start.x + 1, start.y), end) ||
              visit(maze, pt(start.x, start.y - 1), end) || 
              visit(maze, pt(start.x - 1, start.y), end))) {
                 maze[start.x][start.y] = 0;
         }
    }
    return maze[end.x][end.y];
}
void print(int maze[][12], int x,int y) {
    int i, j;
    for(i = 1; i <= x; i++) { 
        for(j = 1; j <= y; j++) switch(maze[i][j]) {
            case 0 : cout<<"  "; break;
            case 1 : cout<<"◇"; break;
            case 2 : cout<<"█"; 
        }
        cout<<"\n"; 
    }     
}
int main(){
	int maze[12][12];
		int tc,x,y;
	cin>>tc;
	while(tc--){
		for(int i=0;i<12;i++){
			for(int j=0;j<=11;j++){
				maze[i][j]=2;
			}
		}
		cin>>x>>y;
		for(int i=1;i<=x;i++){
			for(int j=1;j<=y;j++){
				cin>>maze[i][j];
			}
		}
		if(!visit(maze, pt(1, 1), pt(x,y))) {
        cout<<"\n沒有找到出口！\n"; 
    }
    print(maze,x,y);
	}
	return 0;
}
