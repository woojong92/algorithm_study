/********************************************************
	k번째 수
	문제출처- https://www.acmicpc.net/problem/11004
	
	nth_element는 정렬기준에 따라 몇 번째 원소만 정확히 뽑아준다.
	cout, cin 보다 scanf, printf가 빠르다. cout, cin사용하면 시간초과 발생. 
*********************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	vector<int> v(n);
	for(int i=0; i<n; i++){
		scanf(" %d", &v[i]);
	}
	k-=1;
	/* nth_element < partial_sort < sort < stable_sor */
	nth_element(v.begin(), v.begin()+k, v.end());
	printf("%d \n", v[k]);
    return 0;
} 

