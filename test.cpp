#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
int main(){
	int t=0, tc=1;// t: 테스트 케이스 수
	cin >> t;
		 
	while(t--){
		char buf[100];// 입력되는 문자열  
		vector<string> vec;
		char c;
        int q=0;
        while((c=getchar()) && c !=EOF){
        	if(c==' '){
        		vec.push(buf);
        		lseek(buf, 0)
			}
			buf[q]
            q++;
        } 
        
        for(int i=0; i<q; i++){
        	printf("%s ", vec[q]);
        }
        //cin >> z;     
        //getline(cin, z);//문자열 입력 
		int a, b;
		
		int m[100000];
		
		cin >> a >> b ;
		getchar();
				
		int j=1, k=0, cnt=0;
		for(int i=0; i<=z.size(); i++){
			if(z[i]==' ' || z[i]=='\0'){
				m[j]=cnt; 
				//printf("%d \n", cnt);
				cnt=0;
				j++;			
			}else{
				cnt++;
			}
		}
		
		int ans=0;
		for(int i=a; i<=b; i++){
			
			int result=0;
			bool flag=true;
			int c=i;
			
			for(int l=1; l<=j; l++){
				if(flag==true){
					result=result+m[l]+1;
					c=c-m[l]-1;
					flag=false;
					continue;
				}
				
				if(c<m[l]){
					flag=true;
					--l;
					c=i;
				}else if(c==m[l]){
					flag=true;
					c=i;
				}else{
					c=c-m[l]-1;
				}
			}
			
			ans= ans+i*(result-1);
			printf("result: %d      ans: %d  \n", result-1, ans);
		}
		printf("#%d %d\n", tc, ans);	
		tc++;	
	} 
	return 0;
}
