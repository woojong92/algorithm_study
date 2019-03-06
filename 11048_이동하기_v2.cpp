/***********************************************************
	�̵��ϱ�_v2
	https://www.acmicpc.net/problem/11048
***********************************************************/

#include <cstdio>
#include <algorithm>
using namespace std;

int a[1001][1001];
int d[1001][1001];

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    d[1][1] = a[1][1];
    
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            // -> 
            if (j+1 <= m && d[i][j+1] < d[i][j] + a[i][j+1]) {
                d[i][j+1] = d[i][j] + a[i][j+1];
            }
            // �Ʒ�
            if (i+1 <= n && d[i+1][j] < d[i][j] + a[i+1][j]) {
                d[i+1][j] = d[i][j] + a[i+1][j];
            }
            // �밢�� �Ʒ� ������
            if (i+1 <= n && j+1 <= m && d[i+1][j+1] < d[i][j] + a[i+1][j+1]) {
                d[i+1][j+1] = d[i][j] + a[i+1][j+1];
            }
        }
    }
    
    printf("%d\n",d[n][m]);
    return 0;
}
