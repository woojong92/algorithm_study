#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

//n: ���� ���� ��  
int n; 
string W, S;
int cache[101][101];

bool matchMemoized(int w, int s){
	//�޸������̼�
	int& ret = cache[w][s];
	if(ret != -1) return ret;
	
	while( s < S.size() && w < W.size() && ( W[w] == '?' || W[w] == S[s] )) {
		++w;
		++s;		
	} 
}

int main(){
	//t: �׽�Ʈ���̽�  
	int t; 	
	scanf("%d", &t);
	while(t--){
		//���̽����̽� ù �ٿ� ���ϵ�ī�� ���� �Է� 
		cin >> W;
		//���ϸ��� �� �Է� 
		scanf("%d", n);
		
		for(int i=0; i<n; i++){
			char a[101]; 
			scanf("%s", &a);
			S.push_back(a);
		} 
	
		for(int i=0; i<n; i++){
			cout << s[i] << '\n';
		}
	
	}
	
	return 0;
}
