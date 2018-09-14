#include <iostream>
#include <cstring>
using namespace std;

int n;
int board[1000][1000];

bool jump(int y, int x){
	//�������: ������ ���� ��� ���
	if( y >= n || x >= n) return false;
	//�������: ������ ĭ�� ������ ���
	if( y == n-1 && x == n-1 ) return true;
	
	int jumpSize=board[y][x];
	
	return jump(y+jumpSize, x) || jump(y, x+jumpSize); 
}

int cache[1000][1000];

int jump2(int y, int x){
	//�������: ������ ���� ��� ���
	if( y >= n || x >= n) return 0;
	//�������: ������ ĭ�� ������ ���
	if( y == n-1 && x == n-1 ) return 1;
	
	//�޸������̼� 
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
