/**********************************************************
	테트로미노_v1 
	https://www.acmicpc.net/problem/14500	
***********************************************************/
#include <iostream>
using namespace std;
int a[500][500];
int main() {
	int n, m; // 세로 크기 n, 가로크기 m
	scanf(" %d %d", &n, &m);
	// n*m 크기의 사각형의 점수 입력받기 
	for( int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			scanf(" %d", &a[i][j]);
		}
	}
	int ans= 0;
	for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
        	//도형의 경우의 수 모두 검사 
            if (j+3 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i][j+3];
                if (ans < temp) ans = temp;	//검사결과 가장 큰 값이면 ans에 저장 
            }
            if (i+3 < n) {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+3][j];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) {
                int temp = a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+2][j];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j-1 >= 0) {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+2][j-1];
                if (ans < temp) ans = temp;
            }
            if (i-1 >= 0 && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i-1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+2][j+1];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i+2][j+1];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+1 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
                if (ans < temp) ans = temp;
            }
            if (i-1 >= 0 && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i-1][j+1] + a[i-1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) {
                int temp = a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+2][j+1];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i+1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j-1 >= 0) {
                int temp = a[i][j] + a[i+1][j] + a[i+1][j-1] + a[i+2][j-1];
                if (ans < temp) ans = temp;
            }
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
   	printf("%d \n", ans);
	return 0; 
	
}




















