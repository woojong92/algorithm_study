#include <iostream>
#include <cstring>
using namespace std;

int arr[10][10];

int main() {
	int t; // t: test_case
	
	scanf("%d", &t);
	
	for(int test_case = 1; test_case <= t; test_case++) {
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

/*
#include<stdio.h>
 
int T;
int N;
int arr[20][20] = { 1,0 };
 
int main() {
 
    int i, j;
    int cnt = 1;
 
    scanf("%d", &T);
 
    while (T--) {
 
        scanf("%d", &N);
 
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= i; j++) {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
 
        printf("#%d\n", cnt++);
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= i; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
} */
