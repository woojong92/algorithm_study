#include <iostream>
using namespace std;

int a[1001]={0};
bool check[1001]={false};

void dfs(int x){
	if(check[x]) return;
	
	check[x]=true;
	dfs(a[x]);
}

int main(){
	int t;
	scanf(" %d", &t);
	
	while(t--){
		int n;
		scanf(" %d", &n);
		for(int i=1; i<=n; i++){
			a[i]=0; check[i]=false;
		}
		for(int i=1; i<=n; i++){
			scanf(" %d", &a[i]);
		}
	
		int ans=0;

		for(int i=1; i<=n; i++){
			if(!check[i]){
				ans++;
				dfs(i);	
			} 
		}
		printf("%d\n", ans);	
	}
	return 0;
}
