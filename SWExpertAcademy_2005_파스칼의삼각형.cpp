/*
#include <iostream>

int main() {
	int t; // t: test_case
	
	scanf("%d", &t);
	int arr[10][10];
	arr[0][0] = 1;
	
	for(int i = 1 ; i<10 ; i++) {
		for(int j = 0 ; j <= i ; j++) {
			if(j == 0 || j == i ) arr[i][j] = 1;
			else{
				arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
			}
		}
	}
	
	
	for(int test_case = 1; test_case <= t; t++) {
		int n;
		scanf("%d", &n);
		printf("#%d\n", test_case);
		
		for( int i=0; i<n ; i++){
			for( int j=0; j<=i; j++){
				printf("%d ", arr[i][j]);		
			}	
			printf("\n");					
		}	
	} 
	
	return 0;
} 
*/

#include <iostream>
#include <cstring>

int arr[10][10];

int main() {
	int t; // t: test_case
	
	scanf("%d", &t);
	

	for(int test_case = 1; test_case <= t; t++) {
		int n;
		scanf("%d", &n);
		printf("#%d\n", test_case);
		memset(&arr, 0, sizeof(arr));		
		
        for(int i = 0 ; i<n ; i++) {
            for(int j = 0 ; j < i+1 ; j++) {
            	
                if( j == 0 || j == i ){
                    arr[i][j] = 1;
                    printf("%d ", arr[i][j]);
                }else{
                    arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
                    printf("%d ", arr[i][j]);
                }
            }
            printf("\n");
        }
	} 
	
	return 0;
} 
