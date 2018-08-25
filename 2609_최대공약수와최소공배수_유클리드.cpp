#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(b==0){
		return a;
	}else{
		return gcd(b, a%b);
	}
}

int main(){
	int a, b, temp;
	cin >> a >> b ;
	
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	
	cout << gcd(a, b) << '\n';
	cout << a*b/gcd(a, b) << '\n';
	
	return 0;	
}
