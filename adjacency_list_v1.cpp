#include <iostream>
#include <vector>
using namespace std;
vector<int>	a[10];
int main(){
	int n, m; //n: ����� ��, m: ������ �� 
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		int u, v; //����� ���� 
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	
	for(int i=0; i<m; i++){
		printf("%d:", i);
		for(int j=0; j<a[i].size(); j++){
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
}
