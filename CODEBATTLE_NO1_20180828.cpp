/*******************************************************
*	�μ����� ���� üũ�ϱ�
*	https://www.swexpertacademy.com/main/talk/codeBattle/battleDetail.do?categoryId=AWVe9c1aizYDFAUO
**********************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int t, cnt=1; //t: �׽�Ʈ ���̽� 
	int d[101];
	int ans[101];
	cin >> t;
	
	while(t--){
		memset(ans, 0, sizeof(ans));
		memset(d,0,sizeof(d));
		int n, yes; //n: �������� ��, yes: ���� ������ ����� �� 
		cin >> n >> yes;
		for(int i=1; i<=yes; i++){
			cin >> d[i];
		}
		for(int i=1; i<=yes; i++){
			ans[d[i]]=true;// ������ �л� true
		}		
		printf("#%d ", cnt);
		for(int i=1; i<=n; i++){		
			if(ans[i]==false){
				cout << i << ' ';
			}
		}
		cout << '\n';
		cnt++; 
	} 
	return 0;
}
