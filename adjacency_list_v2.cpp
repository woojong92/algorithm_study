#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, m; //n: ����� ��, m: ������ �� 
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		int u, v; //����� ���� 
		scanf("%d %d", &u, &v);
		vector<vector<int>> a(n+1); 
		a[u].push_back(v);
		a[v].push_back(u);
	}
	return 0;
}
