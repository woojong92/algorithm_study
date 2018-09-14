#include <iostream>
#include <cstring>
using namespace std;

int n;
int board[1000][1000];

bool jump(int y, int x){
	//기저사례: 게임판 밖을 벗어난 경우
	if( y >= n || x >= n) return false;
	//기저사례: 마지막 칸에 도착한 경우
	if( y == n-1 && x == n-1 ) return true;
	
	int jumpSize=board[y][x];
	
	return jump(y+jumpSize, x) || jump(y, x+jumpSize); 
}

int cache[1000][1000];

int jump2(int y, int x){
	//기저사례: 게임판 밖을 벗어난 경우
	if( y >= n || x >= n) return 0;
	//기저사례: 마지막 칸에 도착한 경우
	if( y == n-1 && x == n-1 ) return 1;
	
	//메모이제이션 
	int& ret = cache[y][x];
	if(ret != -1) return ret;
		 
	int jumpSize=board[y][x];
	return ret = ( jump2(y+jumpSize, x) || jump2(y, x+jumpSize) ); 
}

int main(){
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &board[i][j]);			
		}
	}
	
	if(jump(0,0)) printf("yes\n");
	else printf("no\n");
	
	memset(cache, -1, sizeof(cache));
	
	if(jump2(0,0) != 0) printf("yes\n");
	else printf("no\n");
	
	return 0;
}
