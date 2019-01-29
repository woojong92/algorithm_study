/**********************************************************
	날짜 계산 
	https://www.acmicpc.net/problem/1476	
***********************************************************/
#include <iostream>
using namespace std;

int main() {
	int E, S , M;
	cin >> E >> S >> M; // 입력: 첫째 줄에 세 수 E, S, M이 주어짐
	int e=1, s=1, m=1;
	for( int i=1 ;; i++) {
		// 정답을 찾으면 출력 
		if(e == E && s == S && m == M) {
			cout << i << '\n';
			break;
		}
		e += 1;
		s += 1; 
		m += 1;
		
		//각각 범위가 넘어가면 1로 초기화 
		if( e == 16 ) e=1;
		if( s == 29 ) s=1;
		if( m == 20 ) m=1;
	} 
	return 0;
}


/*************************
  version_2
**************************/

/*
#include <iostream>
using namespace std;
int main() {
    int e,s,m;
    cin >> e >> s >> m;
    e -= 1;
    s -= 1;
    m -= 1;
    for (int i=0;; i++) {
        if (i % 15 == e && i % 28 == s && i % 19 == m) {
            cout << i+1 << '\n';
            break;
        }
    }
}
*/

 

