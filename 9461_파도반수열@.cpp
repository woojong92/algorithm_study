/*
	�ĵ��� ���� ����
	��ó: https://www.acmicpc.net/problem/9461
*/

#include <iostream>
using namespace std;

long long cache[101]={0,1,1,1,2,2,3,4,5,7,9}; //

int main(){
	for(int i=10; i<=100; i++){
	  cache[i]=cache[i-1]+cache[i-5];
	}

	int t; //t: �׽�Ʈ ���̽��� ����
  	cin>>t;

	while(t--){
    	int n;
		cin>>n;// 1<=n<=100
		cout<<cache[n]<<"\n";
	}

	 return 0;
}
