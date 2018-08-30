/**********************************************************
	국영수
	문제출처-  https://www.acmicpc.net/problem/10825
***********************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct Member{
	string name;
	int ko;
	int en;
	int math;
}member;

bool comp(const member &x, const member &y){
	if(x.ko> y.ko){
		return true;	
	}else if( x.ko==y.ko){
		if(x.en == y.en){
			if(x.math == y.math){
				return (x.name< y.name);				
			}else{
				return (x.math > y.math);			
			}
		}else{
			return (x.en < y.en);
		}
	}else{
		return false;
	} 
}

int main(){
	int n;
	cin >> n;
	vector<member>	v(n);
	
	for(int i=0; i<n; i++){
		cin>> v[i].name	>> v[i].ko >> v[i].en >> v[i].math ; 
	}
	
	stable_sort(v.begin(), v.end(), comp);
	
	for(int i=0; i<n; i++){
		cout << v[i].name << '\n' ; 
	}
	
	return 0;
}
