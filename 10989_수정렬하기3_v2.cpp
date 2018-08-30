/********************************************************************************
	수정렬하기3
	문제출처-  https://www.acmicpc.net/problem/10989
	코드원본- https://gist.github.com/Baekjoon/10989 
*********************************************************************************/

#include <iostream>
using namespace std;
int cnt[10001];
int main(){
	int n;
	cin >> n;
	int temp=0;
	for(int i=0; i<n; i++){
		cin >> temp;
		cnt[temp]+=1;
	}
	for(int i=1; i<=10000; i++){
		if(cnt[i]>0){
			for(int j=0; j<cnt[i]; j++){
				cout << i << '\n';
			}
		}
	}
	return 0;
} 
