/*********************************************************************
	트리의 부모 찾기
	문제출처- https://www.acmicpc.net/problem/1167
	코드원본- https://gist.github.com/Baekjoon/b59d721faa5029700adc 
**********************************************************************/

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;


vector<pair<int,int>> a[100001];
bool check[100001];
int dist[100001];

void bfs(int start){
	memset(dist, 0, sizeof(dist));
	memset(check, false, sizeof(check));
	queue<int> q;
	check[start]=true;
	q.push(start);
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0; i<a[x].size(); i++){
			//Edge &e = a[x][i];
			int u=a[x][i].first;
			int v=a[x][i].second;
			if(check[u]==false){
				dist[u] = dist[x] + v;
				q.push(u);
				check[u]=true;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int x;
		scanf("%d", &x);
		while(true){
			int y, z;
			scanf("%d", &y);
			if(y==-1) break;
			scanf("%d", &z);
			a[x].push_back(make_pair(y,z));
		}
	}
	bfs(1);
	int start = 1;
	for(int i=2; i<=n; i++){
		if(dist[i] >= dist[start]){
			start=i;			
		}
	}
	bfs(start);
	int ans=dist[1];
	for(int i=2; i<=n; i++){
		if(ans < dist[i]){
			ans=dist[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}
