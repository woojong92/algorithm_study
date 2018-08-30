/*************************************************
	좌표 정렬하기(pair 이용) 
	문제 출처- https://www.acmicpc.net/problem/11650
	코드 원본- https://gist.github.com/Baekjoon/180de19581f0b55c433c 
*************************************************/

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
    bool operator < (const Point &v) const {
        if (x < v.x) {
            return true;
        } else if (x == v.x) {
            return y < v.y;
        } else {
            return false;
        }
    }
};

int main() {
    int n;
    scanf("%d",&n);
    vector<Point> a(n);
    for (int i=0; i<n; i++) {
        scanf("%d %d",&a[i].x,&a[i].y);
    }
    sort(a.begin(),a.end());
    for (int i=0; i<a.size(); i++) {
        printf("%d %d\n",a[i].x, a[i].y);
    }
    return 0;
}
