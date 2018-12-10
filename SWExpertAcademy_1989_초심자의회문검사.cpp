#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, answer;
    string str;
    scanf("%d", &t);
    
    for(int test_case=1; test_case <= t; test_case++ ){
    		cin >> str;
    		int len = str.length();
			int cnt = 0;        
        	for( int i=0; i <= len/2 ; i++){
 				//printf("%d ", i);
				if(str[i] == str[len-i-1]) cnt++;  
				printf("%d %d \n", i, len-i-1);          	
            }
        if(cnt == len/2+1) answer = 1;
		else answer=0;
		
		printf("#%d %d \n", test_case, answer);
    }
    
 	return 0;   
}
