/********************************************************************************
	이분 그래프
	문제출처- https://www.acmicpc.net/problem/1707
	코드원본- https://gist.github.com/Baekjoon/e32b56ebb4c53c7fb8a914ce27bc6324
*******************************************************************************/


#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[20001];
int color[20001];
bool dfs(int node, int c) {
    color[node] = c;
    for (int i=0; i<a[node].size(); i++) {
        int next = a[node][i];
        if (color[next] == 0) {
            if (dfs(next, 3-c) == false) {
                return false;
            }
        } else if (color[next] == color[node]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    scanf("%d\n",&t);
    while (t--) {
        int n, m;
        scanf("%d %d",&n,&m);
        for (int i=1; i<=n; i++) {
            a[i].clear();
            color[i] = 0;
        }
        for (int i=0; i<m; i++) {
            int u,v;
            scanf("%d %d",&u,&v);
            a[u].push_back(v);
            a[v].push_back(u);
        }
        bool ok = true;
        for (int i=1; i<=n; i++) {
            if (color[i] == 0) {
                if (dfs(i, 1) == false) {
                    ok = false;
                }
            }
        }
        printf("%s\n",ok ? "YES" : "NO");
    }
    return 0;
}
