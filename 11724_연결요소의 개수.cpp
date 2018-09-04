#include <iostream>
#include <vector>
using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node){
	check[node]=true;
	for(int i=0; i<a[node].size(); i++){
		int next = a[node][i];
		//아직 방문하지 않았다면 
		if(!check[next]){
			dfs(next);
		}
	}
 	//더이상 방문할 정점이 없으니, 재귀호출을 종료하고 이전 정점으로 돌아간다. 
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		int u, v;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	int components=0;
	for(int i=1; i<=n; i++){
		//dfs를 시작할 때마다 컴퍼넌츠의 수를 증가 시켜준다 
		if(!check[i]){
			dfs(i);
			components +=1;
		}
	}
	
	printf("%d \n", components);
	return 0;
} 
