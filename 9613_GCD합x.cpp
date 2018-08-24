#include <iostream>
using namespace std;

int cache[101];

void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;	
}

void buble(int *ptr, int len){
	int temp;

	for(int i=1; i<len; i++){
		for(int j=i+1; j<=len ; j++){	
			if(*(ptr+i)>*(ptr+j)) swap((ptr+i), (ptr+j));
		}
	}	
}

int main(){
	int t, n, flag, result;
	cin >> t;
	
	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++){
			scanf(" %d", &cache[i]);
		}
		buble(cache, n);
		
		result=0;
		
		for(int i=1; i<n; i++){
			for(int k=1; i+k<=n ; k++){
				for(int j=1; j<=cache[i]; j++){	
					//printf("j: %d cache[i]: %d cache[i+1]: %d flag: %d\n", j, cache[i], cache[i+1], flag);
					if(cache[i]%j==0 && cache[i+k]%j==0) flag=j;
				}
				//printf("flag: %d \n", flag);
				result+=flag;
			}
		}
			printf("%d \n", result);	
	}

	return 0;
}
