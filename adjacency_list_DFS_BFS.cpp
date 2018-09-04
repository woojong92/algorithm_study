/*********************************************************************
	인접리스트 사용 DFS&BFS 
	코드원본- https://gist.github.com/Baekjoon/1333250dbcbb72671cc7 
*********************************************************************/

#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[1001];
bool check[1001];
void dfs(int node) {
    check[node] = true;
    printf("%d ",node);
    for (int i=0; i<a[node].size(); i++) {
        int next = a[node][i];
        //아직 방문하지 않았다면 
        if (check[next] == false) {
            dfs(next);
        }
    }
    //더이상 방문할 정점이 없으니, 재귀호출을 종료하고 이전 정점으로 돌아간다. 
}
void bfs(int start) {
    queue<int> q;
    memset(check,false,sizeof(check));
    check[start] = true;
    q.push(start);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        printf("%d ",node);
        for (int i=0; i<a[node].size(); i++) {
            int next = a[node][i];
            if (check[next] == false) {
                check[next] = true;
                q.push(next);
            }
        }
    }
}
int main() {
    int n, m, start;
    scanf("%d %d %d",&n,&m,&start);
    for (int i=0; i<m; i++) {
        int u,v;
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for (int i=1; i<=n; i++) {
        sort(a[i].begin(), a[i].end());
    }
    dfs(start);
    puts("");
    bfs(start);
    puts("");
    return 0;
}
