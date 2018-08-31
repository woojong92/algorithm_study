#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, m; //n: 노드의 수, m: 간선의 수 
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		int u, v; //연결된 간선 
		scanf("%d %d", &u, &v);
		vector<vector<int>> a(n+1); 
		a[u].push_back(v);
		a[v].push_back(u);
	}
	return 0;
}
