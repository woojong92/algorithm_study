/************************************************************************
	∫ŒµÓ»£
	https://www.acmicpc.net/problem/2529
************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<int> &perm, vector<char> &a) {
	
	for(int i=0; i<a.size(); i++) {
		if( a[i] == '<' && perm[i] > perm[i+1]) {
			return false;
		}
		if(a[i] == '>' && perm[i] < perm[i+1]) {
			return false;
		}
	}
	
	return true;
}

int main() {
	int k;
	scanf("%d", &k);
	
	vector<char> a(k);
	
	for( int i=0; i<k; i++) {
		scanf(" %c", &a[i]);
	}
	
	for(int i=0; i<k; i++ ) printf("%c ", a[i]);
	printf("\n");
	
	vector<int>	small(10);
	vector<int> big(10);
	 
	for( int i=0; i<=9; i++) {
		small[i] = i;
		big[i] = 9-i;
	}
	
	do{
		if(check(small, a)){
			break;
		}
	}while(next_permutation(small.begin(), small.end()));

	do{
		if(check(big, a)){
			break;
		}
	}while(prev_permutation(big.begin(), big.end()));

    for (int i=0; i<k+1; i++) {
        cout << big[i];
    }
    cout << '\n';
    
    for (int i=0; i<k+1; i++) {
        cout << small[i];
    }
    cout << '\n';
    return 0;
} 
