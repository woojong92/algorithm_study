/*****************************************************************
	부분수열의 합 - 재귀 
	https://www.acmicpc.net/problem/14225
	
	수열 S가 주어졌을 때, 수열 S의 부분 수열의 합으로 나올 수 없는 
	가장 작은 자연수를 구하는 프로그램을 작성하시오.
	예를 들어, S = [5, 1, 2]인 경우에 
	1, 2, 3(=1+2), 5, 6(=1+5), 7(=2+5), 8(=1+2+5)을 만들 수 있다. 
	하지만, 4는 만들 수 없기 때문에 정답은 4이다.
******************************************************************/

#include <iostream>
using namespace std;
bool c[20*100000+10];
int a[20];
int n;
void go(int i, int sum) {
    if (i == n) {
        c[sum] = true;
        return;
    }
    go(i+1, sum+a[i]);
    go(i+1, sum);
}
int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    go(0, 0);
    for (int i=1;; i++) {
        if (c[i] == false) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}
