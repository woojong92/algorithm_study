/**************************************************
	'�����佺�׳׽��� ü'�� �̿��� �Ҽ����ϱ� 
***************************************************/

#include <iostream>
using namespace std;

int main(){
	int p[100]; // �Ҽ����� 
	int pn=0; //�Ҽ��� ���� 
	bool c[101]; //���������� true 
	int n=100; // 100������ �Ҽ� 
	
	for(int i=2; i<=n; i++){
		if(c[i]==false){
			p[pn++]=i;
			for(int j=i+i; j<=n ; j+=i){
				c[j]=true;
			}
		}
	}
	
	for(int k=0; k<pn; k++){
		printf("%d ", p[k]);		
	}

	return 0;	
}
