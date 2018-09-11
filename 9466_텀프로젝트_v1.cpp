/**************************************************************
	�� ������Ʈ
	������ó-  https://www.acmicpc.net/problem/9466
**************************************************************/

// 1. ���� ������ ������ ����.
// 2. ��� �л����� ������Ʈ�� �Բ��ϰ� ���� �л��� ����
// 3. �ڱ� �ڽ� ���� ���� 
 
#include <iostream>
using namespace std;

int a[100001]; //�Բ��ϰ� ���� �л��� ���� 
int d[100001]; //cnt ���� 
int s[100001]; //���� ����Ŭ ���� 

int dfs(int x, int cnt, int &step){
	if(d[x] != 0){
		if(step != s[x]){
			return 0;
		}	
		return cnt-d[x];
	}
	d[x]=cnt;
	s[x]=step;
	return dfs(a[x], cnt+1, step);
}

int main(){
	int t;// t: test_case
	scanf(" %d", &t);

	while(t--){
		int n; //n: �л����� ��
		scanf(" %d", &n);

		for(int i=1; i<=n; i++){
			scanf(" %d", &a[i]);
			d[i]=0;
			s[i]=0;
		} 
		
		int ans=0;
		
		for(int i=1; i<=n ; i++){
			ans += dfs(i, 1, i);
		}
		
		printf("%d \n", n-ans);
	} 
	return 0;	
}
