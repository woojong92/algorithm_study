#include <iostream>
using namespace std;

void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;	
}

int main(){
	int t, a, b, flag, result; //t: �׽�Ʈ ���̽��� ���� a,b: �Է� ���� 
	cin>> t;
	
	while(t--){
		cin >> a >> b ;
		
		if(a>b) swap(&a, &b);
		for(int i=1; i<=a; i++){
			if(a%i==0 && b%i==0) flag=i;
		}
		result=(a/flag)*b;
		cout << result << '\n';
	}
	return 0;
}
