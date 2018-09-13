/***************************************************************
	�ٸ������ 
	algorithm- graph / bfs 
	������ó- https://www.acmicpc.net/problem/2146
	�ڵ����- https://gist.github.com/Baekjoon/6003108df09bf82c0f84 
*****************************************************************/ 
#include <iostream>
#include <queue>
using namespace std;

int a[100][100];
int g[100][100];
int d[100][100];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int main() {
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    
    int cnt = 0;
    
	for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j] == 1 && g[i][j] == 0) {
                g[i][j] = ++cnt;
                queue<pair<int,int>> q;
                q.push(make_pair(i,j));
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for (int k=0; k<4; k++) {
                        int nx = x+dx[k];
                        int ny = y+dy[k];
                        if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                            if (a[nx][ny] == 1 && g[nx][ny] == 0) {
                                g[nx][ny] = cnt;
                                q.push(make_pair(nx,ny));
                            }
                        }
                    }
                }
            }
        }
    }
    
    int ans = -1;
    for (int l=1; l<=cnt; l++) {
        queue<pair<int,int>> q;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                d[i][j] = -1;
                if (g[i][j] == l) {
                    q.push(make_pair(i,j));
                    d[i][j] = 0;
                }
            }
        }
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int k=0; k<4; k++) {
                int nx = x+dx[k];
                int ny = y+dy[k];
                if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                    if (d[nx][ny] == -1) {
                        d[nx][ny] = d[x][y] + 1;
                        q.push(make_pair(nx,ny));
                    }
                }
            }
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (a[i][j] == 1 && g[i][j] != l) {
                    if (ans == -1 || d[i][j]-1 < ans) {
                        ans = d[i][j]-1;
                    }
                }
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}

