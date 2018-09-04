/********************************************************************************
	이분 그래프
	문제출처- https://www.acmicpc.net/problem/1707
*******************************************************************************/



#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int color[20001];
vector<int> a[20001];

void dfs(int node, int c){
	color[node]=c;
	
	for(int i=0; i<a[node].size(); i++){
		int next=a[node][i];
		if(color[next]==0){
			dfs(next, 3-c);
		}
	}
}

int main(){
	int k; //k는 테스트케이스의 수
	scanf("%d", &k);
	
	while(k--){
		int v, e; //v는 정점의 개수, e는 간선의 개수
		scanf(" %d %d", &v, &e);
	    for (int i=1; i<=v; i++) {
            a[i].clear();
            color[i] = 0;
        }
		//memset(color, 0, v+1);
		//memset(a, 0, v+1);
		for(int i=0; i<e; i++){
			int n, m;
			scanf(" %d %d", &n, &m);
			a[n].push_back(m);
			a[m].push_back(n);
		}
		
		for(int i=1; i<=v; i++){
			if(color[i]==0){
				dfs(i,1);
			}
		}
		
		bool ok = true;
		for(int i=1; i<=v; i++){
			for(int j=0; j<a[i].size(); j++){
				int k=a[i][j];
				if(color[i] == color[k]){
					ok = false;
				}
			}
		}		
		printf("%s\n", ok? "YES" : "NO");
	} 
	return 0;
}
