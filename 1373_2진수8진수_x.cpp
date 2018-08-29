#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int main(){
	string n;
	cin >> n;
	
	int k=n.size()%3;
	int e[100000];
	if(k==2){
		e[0]=2*(n[0]-'0')+(n[1]-'0');
	}else if(k==1){
		e[0]=(n[0]-'0');
	}else{
		e[0]=4*(n[0]-'0')+2*(n[1]-'0')+(n[2]-'0');
	}
	//printf("0: %d \n", e[0]);
	int j=1;
	for(int i=1; i <n.size()/3+1; i++){
		e[i]=4*(n[k+j-1]-'0')+2*(n[k+j]-'0')+(n[k+j+1]-'0');
		//printf("%d %d \n", i, e[i]);
		j+=3;
	}
	
	for(int i=0; i<=n.size()/3; i++){
		 printf("%c",itoa(e[i]));
	}
	
	return 0;
} 
