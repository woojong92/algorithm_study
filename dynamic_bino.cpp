#include <iostream>
#include <cstring>
using namespace std;


int bino(int n, int r){
	//������� 
	if(r==0 || n==r) return 1;
	return (bino(n-1, r-1)+bino(n-1, r));
}

//�޸������̼��� �̿��� ���װ���� ���
int cache[30][30];

int bino2(int n, int r){
	//������� 
	if(r==0 || n==r) return 1;
	if(cache[n][r] != -1) return cache[n][r];
	return cache[n][r] = bino2(n-1, r-1) + bino2(n-1, r); 
} 


int main(){
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d\n", bino(n,r));
	
	//cache�� ���� -1�� �ʱ�ȭ 
	memset(cache, -1, sizeof(cache));
	printf("%d\n", bino2(n, r));
	
	return 0;
}
