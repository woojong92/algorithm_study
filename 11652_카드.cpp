/*******************************************************************
	카드
	문제출처- https://www.acmicpc.net/problem/11652 
*******************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long a[1000000];

int main(){
	int n;
	cin >> n;
	vector<long long> v(n);
	
	for(int i=0; i<n ;i++){
		cin >> v[i];
	}
	
	stable_sort(v.begin(), v.end());
	
	/*
	for(int i=0; i<n ;i++){
		cout << v[i] << ' ';
	}
	cout << '\n';
	*/
	
	int cnt=1;//중복된 카드의 수 
	int cnt_max=1;//중복된 카드의 최대 수  
	long long cnt_n=v[0];//가장 많이 가지고 있는 정수 
	
	for(int i=1; i<n; i++){
		if(v[i-1]!=v[i]){
			if(cnt_max<cnt){
				cnt_max=cnt;
				cnt_n=v[i-1];
			}
			cnt=1;
		}else{
			cnt++;
		}	
	}
	
	if(cnt_max<cnt){
		cnt_max=cnt;
		cnt_n=v[n-1];
	}
	
	cout << cnt_n;
	
	return 0;
}

