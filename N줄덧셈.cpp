#include <iostream>

int main(){
	int n, result=0;
    scanf("%d", &n);
    
    if( n%2 == 1) result = (1+n)*(n/2)+(n/2+1);
    else result = (1+n)*(n/2);
    
    printf("%d\n", result);
    return 0;
}
