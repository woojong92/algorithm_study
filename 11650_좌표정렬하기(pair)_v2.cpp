/*************************************************
	��ǥ �����ϱ�(pair �̿�) 
	���� ��ó- https://www.acmicpc.net/problem/11650
	�ڵ� ����- https://gist.github.com/Baekjoon/c6c920ca4fd31eb9960e 
*************************************************/

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);
vector<pair<int,int> > a(n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&a[i].first,&a[i].second);
    }
    sort(a.begin(),a.end());
    for (int i=0; i<a.size(); i++) {
        printf("%d %d\n",a[i].first, a[i].second);
    }
    return 0;
}
