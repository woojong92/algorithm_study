/**********************************************************
	��¥ ��� 
	https://www.acmicpc.net/problem/1476	
***********************************************************/
#include <iostream>
using namespace std;

int main() {
	int E, S , M;
	cin >> E >> S >> M; // �Է�: ù° �ٿ� �� �� E, S, M�� �־���
	int e=1, s=1, m=1;
	for( int i=1 ;; i++) {
		// ������ ã���� ��� 
		if(e == E && s == S && m == M) {
			cout << i << '\n';
			break;
		}
		e += 1;
		s += 1; 
		m += 1;
		
		//���� ������ �Ѿ�� 1�� �ʱ�ȭ 
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

 

