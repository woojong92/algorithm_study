/**********************************************************
	테트로미노_v2
	https://www.acmicpc.net/problem/14500	
***********************************************************/
#include <iostream>
using namespace std;
int a[500][500];
int block[19][3][2] = {
    {{0,1}, {0,2}, {0,3}},
    {{1,0}, {2,0}, {3,0}},
    {{1,0}, {1,1}, {1,2}},
    {{0,1}, {1,0}, {2,0}},
    {{0,1}, {0,2}, {1,2}},
    {{1,0}, {2,0}, {2,-1}},
    {{0,1}, {0,2}, {-1,2}},
    {{1,0}, {2,0}, {2,1}},
    {{0,1}, {0,2}, {1,0}},
    {{0,1}, {1,1}, {2,1}},
    {{0,1}, {1,0}, {1,1}},
    {{0,1}, {-1,1}, {-1,2}},
    {{1,0}, {1,1}, {2,1}},
    {{0,1}, {1,1}, {1,2}},
    {{1,0}, {1,-1}, {2,-1}},
    {{0,1}, {0,2}, {-1,1}},
    {{0,1}, {0,2}, {1,1}},
    {{1,0}, {2,0}, {1,1}},
    {{1,0}, {2,0}, {1,-1}},
};

int main() {
	int n, m;
	scanf(" %d %d", &n, &m);
	for ( int i=0; i<n; i++ ) {
		for ( int j=0; j<m; j++ ){
			scanf(" %d", &a[i][j]);
		}
	}
	
	int ans =0;
	
	for( int i=0; i<n; i++ ){
		for( int j=0; j<m; j++ ){
			// block의 경우의 수 만큼 검사 
			for( int k=0; k<19; k++ ){
				bool ok = true;
				int sum = a[i][j];
				
				//
				for( int l=0; l<3; l++ ){
					int x = i + block[k][l][0];
					int y = j + block[k][l][1];
					
					if( x >= 0 && x < n && y >= 0 && y < m ){
						sum += a[x][y];
					} else {
						// 범위에 벗어나면 break;
						ok = false;
						break;
					}
				}
				
				if( ok && ans < sum ) {
					ans = sum;
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}

























