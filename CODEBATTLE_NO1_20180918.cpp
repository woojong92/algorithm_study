#include <iostream>
using namespace std;

int main(){
	int t;//t�� �׽�Ʈ ���̽��� ���� 
	scanf(" %d", &t);
	
	for(int i=1; i<=t; i++){
		long long n;//n�� �Է¹޴� ���� 
		scanf(" %lld", &n);
		long long ans=-1;//ans�� ��� ��
		 
		for(long long j=1; j*j*j<n+1; j++){
			if(j*j*j==n){
				ans=j;				
			}			
		}
		printf("#%d %lld\n", i, ans); 
	} 
	return 0;
}
