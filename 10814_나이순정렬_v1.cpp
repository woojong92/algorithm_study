/*****************************************************
	나이순 정렬 
	문제 출처- https://www.acmicpc.net/problem/10814
*******************************************************/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

typedef struct Member{
	string name;
	int age;
	int join;
}member;

bool comp(const member &x, const member &y){
	if(x.age < y.age){
		return true;
	}else if(x.age == y.age){
		return (x.join < y.join);
	}else{
		return false;
	}
}

int main(){
	int n; //n은 회원의 수
	cin >> n;
	vector<member> v(n);
	
	for(int i=0; i<n; i++){
		cin >> v[i].age >> v[i].name ;
		v[i].join=i;
	}
	
	stable_sort(v.begin(),v.end(), comp);
	
	for(int i=0; i<v.size(); i++){
		cout<< v[i].age << ' ' << v[i].name << '\n';
	}
	return 0;	
}
 
