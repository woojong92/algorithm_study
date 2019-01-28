/************************************************************
	���� ���� ���� 

***********************************************************/

#include <iostream>
#include <vector>
#include <string>

// ���ĺ��� �� ���ڿ� ���� ���� ��� ǥ��
// ����(i,j)�� ���ĺ� i�� j���� �տ� �;� ���� ��Ÿ����.
vector<vector<int> > adj;
// �־��� �ܾ��κ��� ���ĺ� ���� ���İ��� �׷����� �����Ѵ�.
void makeGraph(const vector<string>& words) {
	adj = vector<vector<int> >(26, vector<int>(26, 0));
	for( int j = 1; j< words.size()), j++) {
		int i = j-1, len = min(words[i].size()), words[j].size());
		//words[i]�� words[j] �տ� ���� ������ ã�´�.
		for( int k = 0; k <len; ++k){
			int a = words[i][k] - 'a';
			int b = words[j][k] - 'a';
			adj[a][b] = 1;
			break
		} 
	}
} 

/*
int main() {
	int C;
	scanf(" %d", &C);
	vector<string> words;
	
	while(C--){
		scanf(" %d", &n);
		for(int i=0; i<n; i++){
			
		}
	}
}*/
