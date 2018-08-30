/********************************************************************
	나이순 정렬 
	문제 출처- https://www.acmicpc.net/problem/10814
	코드 원본- https://gist.github.com/Baekjoon/e183e261cb91790a5618
**********************************************************************/

include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Person {
    int age;
    string name;
};
bool cmp(const Person &u, const Person &v) {
    return u.age < v.age;
}
int main() {
    int n;
    cin >> n;

    vector<Person> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i].age >> a[i].name;
    }

    stable_sort(a.begin(), a.end(), cmp);

    for (int i=0; i<n; i++) {
        cout << a[i].age << ' ' << a[i].name << '\n';
    }

    return 0;
}
