#include <iostream>
#include <vector>
using namespace std;
int a[10][10];
int main() {
	int n, m;
	scanf("%d %d",&n,&m);
	for(int i= 0; i<m; i++){
		int u,v	;
		scanf("%d %d",&u,&v);
		a[u][v] = a[v][u] =	1;
	}
}
