/*************************************************
	��ǥ �����ϱ�(struct, cmp �̿�) 
	���� ��ó- https://www.acmicpc.net/problem/11650
*************************************************/
#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

typedef struct Point{
	int x;
	int y;
}point;

bool comp(const point &u, const point &v){
	if( u.x < v.x){
		return true;
	}else if(u.x==v.x){
		return u.y < v.y;
	}else{
		return false;
	}
}

int main(){
	int n; //n�� ���� ���� 
	cin >> n;
	vector<point> vp(n);
	
	for(int i=0; i<n; i++){
		cin >> vp[i].x >> vp[i].y;
	}
	
	sort(vp.begin(), vp.end(), comp);
		
	for(int i=0; i<n; i++){
		cout << vp[i].x << ' ' << vp[i].y << '\n';
	}
	return 0;	
}
