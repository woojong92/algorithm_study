/******************************************************************
	미로탐색
	문제출처-  https://www.acmicpc.net/problem/2178
*******************************************************************/
#include <iostream>
#include <queue>
using namespace std;

int n, m;
int a[100][100];
int d[100][100];
bool check[100][100];

int dx[]={0, 0, -1, 1};
int dy[]={1, -1, 0, 0};

void bfs(int x, int y){
	queue<pair<int,int>> q;
	q.push(make_pair(x,y));
	check[x][y]=true;
	d[x][y]=1;
			
	while(!q.empty()){
		x=q.front().first;
		y=q.front().second;
		q.pop();
		for(int k=0; k<4; k++){
			int nx= x+dx[k];
			int ny= y+dy[k];
			if( 0 <= nx && nx < m && 0 <= ny && ny <n ){
				if(a[nx][ny]==1 && check[nx][ny]==false){
					q.push(make_pair(nx,ny));
					d[nx][ny]=d[x][y]+1;
					check[nx][ny]=true;
				}
			}
		}
	}
}

int main(){
	scanf("%d %d", &n, &m); //n: 행 , m: 열 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%1d", &a[j][i]);
		}
	}
	
	bfs(0, 0);
	
	printf("%d", d[m-1][n-1]);
	return 0; 
}












