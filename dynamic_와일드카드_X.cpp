#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

//n: 파일 명의 수  
int n; 
string W, S;
int cache[101][101];

bool matchMemoized(int w, int s){
	//메모이제이션
	int& ret = cache[w][s];
	if(ret != -1) return ret;
	
	while( s < S.size() && w < W.size() && ( W[w] == '?' || W[w] == S[s] )) {
		++w;
		++s;		
	} 
}

int main(){
	//t: 테스트케이스  
	int t; 	
	scanf("%d", &t);
	while(t--){
		//테이스케이스 첫 줄에 와일드카드 패턴 입력 
		cin >> W;
		//파일명의 수 입력 
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
