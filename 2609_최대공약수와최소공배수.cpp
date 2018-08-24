#include <iostream>
using namespace std; 

void swap(int *x, int *y){
	int temp;
	
	if(x>y){
		temp=*x;
		*x=*y;
		*y=temp;
	}	
}	


int main(){
	int a, b, flag ,lcm, gcm ;//lcm :최소공배수, gcm:최대공배수 
	cin >> a >> b;
	
	swap(&a, &b);
	//printf("%d %d", a, b);
	
	for(int i=1; i<=a; i++){
		if(a%i==0 && b%i==0) flag=i;
	}
	
	gcm=flag;
	lcm=(a/gcm)*b;
	
	cout << gcm << '\n';
	cout << lcm << '\n'; 

	return 0;
}
