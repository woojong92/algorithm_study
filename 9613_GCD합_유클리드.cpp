#include <iostream>
#include <cstring>
using namespace std;

/*
void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;	
}
*/

/*
void buble(int *ptr, int len){
	int temp;

	for(int i=1; i<len; i++){
		for(int j=i+1; j<=len ; j++){	
			if(*(ptr+i)>*(ptr+j)) swap((ptr+i), (ptr+j));
		}
	}	
}
*/
int gcd(int a, int b){
	if(b==0){
		return a;
	}else{
		return gcd(b, a%b);
	}
} 

int main(){
	int t, n;
	int cache[111];
	
	cin >> t;
	
	while(t--){
		
		cin >> n;	
		memset(cache, 0, sizeof(cache));
		for(int i=1; i<=n; i++){
			scanf(" %d", &cache[i]);
		}
		//buble(cache, n);
		
		long long result=0;
				
		for(int i=1; i<n; i++){
			for(int j=i+1; j<=n; j++){
				result+=gcd(cache[i], cache[j]);
			}
		}
		printf("%lld \n", result);	
	}

	return 0;
}
