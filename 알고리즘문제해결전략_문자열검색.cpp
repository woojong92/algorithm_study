/***********************************************
	�ܼ��� ���ڿ� �˻� �˰����� ���� 
**********************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//'¤����' H�� �κ� ���ڿ��� '�ٴ�'N�� �����ϴ� ���� ��ġ���� ��� ��ȯ�Ѵ�.
vector<int> naiveSearch(const string& H, const string& N){
	
	vector<int> ret;
	// ��� ���� ��ġ�� �� �õ��� ����.
	for( int begin = 0 ; begin + N.size() <= H.size(); ++begin) {
		bool matched = true;
		for( int i = 0; i < N.size(); ++i) {
			if( H[begin+i] != N[i] ) {
				matched = false;
				break;
			}
		}
		if(matched) ret.push_back(begin);
	} 
	return ret;
} 

int main( ){
	
	string H = "haystack";
	string N = "needle";
	
	cout << H << '\n';
	cout << N << '\n';
	
	vector<int> result = naiveSearch(H, N);
	
	for(int i = 0; i < result.size(); i++){
		cout << result[i];
	}
	return 0;	
}
