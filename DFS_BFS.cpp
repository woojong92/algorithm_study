/***********************************************
 	Depth First Serch 
	���� ��ķ� ����  
	�ð����⵵: O(V^2) 
************************************************/	
//��� ��ü�� ����! dfs(x) => x�� �湮���� �ǹ� 
void dfs(int x){
	check[x] = true;
	printf("%d ", x);
	//���� ������ ã�� �ڵ� 
	for(int i=0; i<=n; i++){
		//x�������� i�� ���� ������ �ְ�, ���� if�� �湮���� �ʾҴ���! 
		if(a[x][i]==1 && check[i]=false) {
			dfs(i);	 
		} 
	}
} 

/*********************************************** 
Depth First Serch 
���� ����Ʈ�� ����  
�ð����⵵: O(V+E) 
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
���� ��ķ� ����  
�ð����⵵: O(V^2) 
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
���� ����Ʈ�� ����  
�ð����⵵: O(V+E) 
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


