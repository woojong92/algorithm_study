/**
*	2007. 패턴 마디의 길이 
*/

#include <iostream>
#include <cstring>
using namespace std;

int main (void) {
	int T;
    char str[100];

    scanf(" %d", &T);
    
    for(int test_case = 1 ; test_case <= T; test_case++) {
        memset(&str, 0, sizeof(str));
    	scanf(" %s" , str);
        int cnt;
        
		for( int i=1; i < 10; i++){
            cnt =0;
        	for(int j=0; j<i; j++){
            	if( str[j] != str[j+i] ) break;
                else cnt++;
            }
            if(cnt == i) break;
        }
        printf("#%d %d\n", test_case, cnt);
    }
	return 0;
}
