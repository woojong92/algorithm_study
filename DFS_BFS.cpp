/***********************************************
 	Depth First Serch 
	인접 행렬로 구현  
	시간복잡도: O(V^2) 
************************************************/	
//재귀 자체가 스택! dfs(x) => x를 방문함을 의미 
void dfs(int x){
	check[x] = true;
	printf("%d ", x);
	//다음 정점을 찾는 코드 
	for(int i=0; i<=n; i++){
		//x정점에서 i로 가는 간선이 있고, 아직 if를 방문하지 않았는지! 
		if(a[x][i]==1 && check[i]=false) {
			dfs(i);	 
		} 
	}
} 

/*********************************************** 
Depth First Serch 
인접 리스트로 구현  
시간복잡도: O(V+E) 
***********************************************/
void dfs(int x){
	check[x] = true;
	printf("%d ", x);
	for(int i=0; i<a[x].size(); i++){
		int y = a[x][i];
		if(check[i]==false){
			dfs(y);
		}
	}
} 

/*********************************************** 
Breadth First Search
인접 행렬로 구현  
시간복잡도: O(V^2) 
***********************************************/
queue<int>	q;
check[1] = true; q.push(1); 
while(!q.empty()){
	int x = q.front(); q.pop();
	printf("%d ", x);
	for( int i=1; i<=n; i++){
		if( a[x][i]==1 && check[i]==false){
			check[i]=true;
			q.push(i);
		}
	} 
}

/*********************************************** 
Breadth First Search
인접 리스트로 구현  
시간복잡도: O(V+E) 
***********************************************/
queue<int>	q;
check[1] = true; q.push(1); 
while(!q.empty()){
	int x = q.front(); q.pop();
	printf("%d ", x);
	for( int i=1; i<=a[x].size(); i++){
		int y=a[x][i];
		if(check[y]==false){
			check[y]=true; q.push(y);
		}
	} 
}


