#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, m; //n: 노드의 수, m: 간선의 수 
	scanf("%d %d", &n, &m);
	vector<vector<int> > a(n+1);
	for(int i=0; i<m; i++){
		int u, v; //연결된 간선 
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}

	return 0;
}
