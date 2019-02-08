/********************************************************************************
	���ٲ��� 4 
	https://www.acmicpc.net/problem/13913
*********************************************************************************/

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

const int MAX = 200000;
bool check[MAX+1];
int dist[MAX+1];
int from[MAX+1];

void print(int n, int m) {
    if (n != m) {
        print(n, from[m]);
    }
    cout << m << ' ';
}


// �����̴� �Ȱų� �����̵� �� �� �ִ�. 
// �ȴ´ٸ� 1�� �� x-1 �Ǵ� x+1�� �̵�, �����̵��ϸ� 1�ʿ� 2*x�� ��ġ�� �̵� 
// �����̰� ������ ã�� �� �ִ� ���� ���� �ð��� �� ���ΰ�? 
int main() {
	//n: �����̰� �ִ� ��ġ, k: ������ �ִ� ��ġ 
	int n, k;
	scanf("%d %d", &n, &k);
	
	check[n] = true; // �湮 ���� 
	dist[n] = 0;
	
	//�����̰� ������ ã�� ���� ���� �ð� ��� -> bfs
	// ��� �̵��ؾ� �ϴ� �� �������� ������ ��� 
	queue<int> q;
	q.push(n);
	while( !q.empty() ) {
		int now = q.front();
		q.pop();
		if( now-1 >= 0 ) {
			if( check[now-1] == false ) {
				q.push(now-1);
				check[now-1] = true;
				dist[now-1] = dist[now] + 1;
				from[now-1] = now;
			} 
		}
		if(now+1 < MAX ) {
			if (check[now+1] == false) {
                q.push(now+1);
                check[now+1] = true;
                dist[now+1] = dist[now] + 1;
                from[now+1] = now;
            }
		}
		if( now*2 < MAX ) {
			if(check[now*2] == false ) {
				q.push(now*2);
				check[now*2] = true;
				dist[now*2] = dist[now] + 1;
				from[now*2] = now;
			}
		}
	} 
	cout << dist[k] << '\n';
	print(n, k);
	/* print with stack
    stack<int> ans;
    for (int i=m; i!=n; i=from[i]) {
        ans.push(i);
    }
    ans.push(n);
    while (!ans.empty()) {
        cout << ans.top() << ' ';
        ans.pop();
    }
     */
	cout << '\n' ;
	
	return 0;
} 





























