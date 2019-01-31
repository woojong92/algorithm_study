/**********************************************************	
	Ä«À× ´Þ·Â 
	https://www.acmicpc.net/problem/6064
**********************************************************/

#include <iostream>
using namespace std;
int main()  {
	int t;
	scanf("%d", &t);
	
	while(t--) {
		int m, n, x, y;
		scanf("%d %d %d %d", &m, &n, &x, &y);
		x -= 1;
		y -= 1;
		bool ok = false;
		for( int k=x; k<(n*m); k+=m) {
			if(k%n == y) {
				printf("%d\n", k+1);
				ok = true;
				break;
			}
		}
		if(!ok) {
			printf("-1\n");
		}
	}
	return 0;
}
