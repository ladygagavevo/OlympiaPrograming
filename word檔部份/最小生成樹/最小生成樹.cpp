#include<iostream>
#include<algorithm> 
using namespace std;
typedef int Vertex;
struct Edge{
	long long cost;
	Vertex v1;
	Vertex v2;
} edges [200000];
bool cmp(Edge e1, Edge e2){
	return e1.cost< e2.cost;
}
Vertex vertexes [100000];
Vertex parent(int id){
	if(id== vertexes [id]) return id;
	else return vertexes[id]=parent(vertexes[id]); 
}
int main(){
	int n , m;
	while(cin>>n>>m){
		long long sum = 0;
		for(int i=0;i<m;i++){
			cin>>edges[i].v1>>edges[i].v2>>edges[i].cost;
		}
		for(int i=0;i<n;i++){
			vertexes[i]=i;
		}
		sort(edges,edges+m,cmp);
		for(int i=0;i<m;i++){
			Vertex v1P=parent(vertexes[edges[i].v1]);
			Vertex v2P=parent(vertexes[edges[i].v2]);
			if(v1P!=v2P){
				vertexes[v2P]=v1P;
				sum+=edges[i].cost;
			}
		}
		bool singleSet = true;
		Vertex s = parent(vertexes[0]);
		for(int i=1;i<n;i++){
			if(s!=parent(vertexes[i])){
				cout<<"-1\n";
				singleSet = false;
				break;
			}
		}
		if (singleSet) {
			cout << sum << "\n";
		}
	}
	return 0;
}
