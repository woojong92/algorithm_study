/**************************************************************
	텀 프로젝트
	문제출처-  https://www.acmicpc.net/problem/9466
**************************************************************/

// 1. 팀원 수에는 제한이 없다.
// 2. 모든 학생들은 프로젝트를 함께하고 싶은 학생을 선택
// 3. 자기 자신 선택 가능 
 
#include <iostream>
using namespace std;

int a[100001]; //함께하고 싶은 학생들 저장 
int d[100001]; //cnt 저장 
int s[100001]; //같은 싸이클 저장 

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
		int n; //n: 학생들의 수
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
