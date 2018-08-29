/******************************************************
	쇠막대기 자르기 
	https://www.swexpertacademy.com/main/talk/codeBattle/battleDetail.do
*******************************************************/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	int t, cnt=1; //t: 테스트 케이스의 수 
	cin >> t; 
	
	while(t--){
		string a;
		stack<char> st;
				
		cin>> a;
		int result=0;
		
		for(int i=0; i<a.size() ; i++){
			if(a[i]=='('){
				st.push(a[i]);
			}else{
				if(a[i-1]=='('){
					//레이저
					st.pop();
					result+=st.size(); 
				}else{
					st.pop();
					result+=1;
				} 
			}
		}
		printf("#%d %d \n", cnt, result);
		cnt++;
	} 
}
