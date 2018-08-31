/********************************************************
	k��° ��
	������ó- https://www.acmicpc.net/problem/11004
	
	nth_element�� ���ı��ؿ� ���� �� ��° ���Ҹ� ��Ȯ�� �̾��ش�.
	cout, cin ���� scanf, printf�� ������. cout, cin����ϸ� �ð��ʰ� �߻�. 
*********************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	vector<int> v(n);
	for(int i=0; i<n; i++){
		scanf(" %d", &v[i]);
	}
	k-=1;
	/* nth_element < partial_sort < sort < stable_sor */
	nth_element(v.begin(), v.begin()+k, v.end());
	printf("%d \n", v[k]);
    return 0;
} 

