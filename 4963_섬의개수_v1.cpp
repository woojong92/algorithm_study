#include <iostream>
using namespace std;

int w=1, h=1;
int a[50][50]; 
int d[50][50];
int dy[]={0,  0,  1,  -1,  1, -1, -1,  1};
int dx[]={1, -1,  0,   0,  1, -1,  1, -1};

void dfs(int y, int x, int cnt){
	d[y][x]=cnt;
	
	for(int k=0; k<8; k++){
		int ny= y + dy[k];
		int nx= x + dx[k];
		if( 0 <= ny && ny < h && 0 <= nx && nx < w){
			if(a[ny][nx]==1 && d[ny][nx]==0){
				dfs(ny, nx, cnt);
			}			
		}
	}
}

int main(){
	while(true){
		scanf("%d %d", &w, &h);
		if(w==0 && h==0) break;
		
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				scanf("%1d", &a[i][j]);
				d[i][j]=0;
			}
		}
		
		int cnt=0;
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if( a[i][j]==1 && d[i][j]==0) dfs(i, j, ++cnt);
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}

