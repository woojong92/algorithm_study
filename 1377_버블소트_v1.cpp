/*********************************************************
	�����Ʈ
	������ó- https://www.acmicpc.net/problem/1377
	�ð��ʰ� ���� �߻�!! 
***********************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int a[500001];
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<n+1; i++){
		scanf(" %d", &a[i]);
	}
	
	bool change=false;
	for(int i=1; i<n+1; i++){
		change=false;
		for(int j=1; j<=n-i; j++){
			if(a[j] > a[j+1]){
				change=true;
				swap(a[j], a[j+1]);
			}
		}
		if(change==false){
			cout << i << '\n';
			break;
		}
	}
	return 0;
}
