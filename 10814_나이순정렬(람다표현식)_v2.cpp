/********************************************************************
	나이순 정렬 
	문제 출처- https://www.acmicpc.net/problem/10814
	코드 원본- https://gist.github.com/Baekjoon/633c9eaf24cd4606ef01 
**********************************************************************/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Person {
    int age;
    string name;
    int join;
};
int main() {
    int n;
    cin >> n;

    vector<Person> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i].age >> a[i].name;
        a[i].join = i;
    }

    sort(a.begin(), a.end(), [](Person u, Person v) {
        return (u.age < v.age) || (u.age == v.age && u.join < v.join);
    });

    for(auto p : a) {
        cout << p.age << ' ' << p.name << '\n';
    }

    return 0;
}
