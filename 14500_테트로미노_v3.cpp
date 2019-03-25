/**********************************************************
	테트로미노_v3
	https://www.acmicpc.net/problem/14500	
***********************************************************/

#include <iostream>
using namespace std;

int a[500][500];
bool c[500][500]; // 중복처리 

int n, m;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int ans = 0;

// (x, y), sum은 방문한 수의 합, cnt는 방문한수   
void go(int x, int y, int sum, int cnt) {
    if (cnt == 4) {
        if (ans < sum) ans = sum;
        return;
    }
    if (x < 0 || x >= n || y < 0 || y >= m) return;
    if (c[x][y]) return;
    c[x][y] = true;
    for (int k=0; k<4; k++) {
        go(x+dx[k],y+dy[k],sum+a[x][y],cnt+1);
    }
    c[x][y] = false;
}


int main() {
	// 세로크기 n, 가로크기 m 
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            go(i,j,0,0); //이중포문으로 모든 x, y를 방문 
            // 예외 처리 1 
            if (j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2];
                if (i-1 >= 0) {
                    int temp2 = temp + a[i-1][j+1];
                    if (ans < temp2) ans = temp2;
                }
                if (i+1 < n) {
                    int temp2 = temp + a[i+1][j+1];
                    if (ans < temp2) ans = temp2;
                }
            }
            
            // 예외 처리 2 
            if (i+2 < n) {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j];
                if (j+1 < m) {
                    int temp2 = temp + a[i+1][j+1];
                    if (ans < temp2) ans = temp2;
                }
                if (j-1 >= 0) {
                    int temp2 = temp + a[i+1][j-1];
                    if (ans < temp2) ans = temp2;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}

