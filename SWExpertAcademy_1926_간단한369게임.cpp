/**
*	1926. 간단한 369게임 
*/

#include <iostream>
using namespace std;

int main(){
	int n;
    scanf(" %d", &n);
    
    for( int i=1; i<=n; i++){
    	int cnt = 0, j = i;

        while( j ){
            
            if( j%10 == 0){
             	j /= 10;
                continue;
            }
            else if(  (j%10)%3 == 0){
                printf("-");
                cnt++;
            }
            j /= 10;
        }
        
        if( cnt == 0 ) printf("%d ", i);
        else printf(" ");
    }
    
}
