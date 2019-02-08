/********************************************************************************
	숨바꼭질 4 
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


// 수빈이는 걷거나 순간이동 할 수 있다. 
// 걷는다면 1초 후 x-1 또는 x+1로 이동, 순간이동하면 1초에 2*x의 위치로 이동 
// 수빈이가 동생을 찾을 수 있는 가장 빠른 시간이 몇 초인가? 
int main() {
	//n: 수빈이가 있는 위치, k: 동생이 있는 위치 
	int n, k;
	scanf("%d %d", &n, &k);
	
	check[n] = true; // 방문 여부 
	dist[n] = 0;
	
	//수빈이가 동생을 찾는 가장 빠른 시간 출력 -> bfs
	// 어떻게 이동해야 하는 지 공백으로 구분해 출력 
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





























