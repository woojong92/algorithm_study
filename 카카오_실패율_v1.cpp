#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool comp( pair<double,int> i, pair<double,int> j){
    if( i.first > j.first ){
    	return true;
	} else if( i.first == j.first ){
        if( i.second < j.second) {
        	return true;
		}else{
			return false;
		}
    }else {
    	return false;
	}
}

vector<int> solution(int N, vector<int> stages) {
    //실패율 = 스테이지에 도달했으나 클리어x 사람수/ 스테이지 도달 사람수
    // 스테이지에 도달한 유저가 없는 경우 스테이지 실패율 0
    int total_users = stages.size(); 
    vector<pair<int,int> > v(N+2); // 스테이지별 <클리어,도달수>
    
    // 사람 순회
    for(int i=0; i < total_users; i++){
        //사람별 스테이지 순회 // j: 스테이지 번호
        for(int j=1; j<= stages[i]; j++){
            if( j < stages[i]) {
                v[j].first++;//클러한 사람 수
                v[j].second++; 
            } else if(j == stages[i]) {
                v[j].second++; // 도달수    
            }
        }
    }
    
    for(int i=1; i<=N; i++){
        cout<< i<<": " <<v[i].first<< ':'<<v[i].second<<'\n';
    }
    
    vector<pair<double, int>> m;
    
    for(int i=1; i<=N; i++) {
        if( v[i].second == 0 ){
            m.push_back(make_pair(0, i));
            cout << i << ";" << 0 <<'\n';        
        }else{
            double buf = (double)v[i].first/(double)v[i].second;
            m.push_back(make_pair(buf, i)); 
            cout << i << ";" << m[i-1].first<<'\n';
        }
    }
    
    for( int i=0; i<N; i++)
        printf("%f %d\n", m[i].first, m[i].second);
    
    vector<int> answer(N);
      
    sort(m.begin(), m.end());
    
    printf("\n");    
    for( int i=0; i<N; i++)
        printf("%f %d\n", m[i].first, m[i].second);

    printf("\n");
    for(int i=0; i<N; i++){
        answer[i]=m[i].second;
        printf("%f %d\n", m[i].first, m[i].second);
    }
    
    return answer;
}

int main(){
	
	vector<int> t1 = {2, 1, 2, 6, 2, 4, 3, 3};
	vector<int> t2 = {4, 4, 4 ,4, 4};
	vector<int> t3 = {4, 5, 4, 5, 4};
	vector<int> ret1 = solution(5, t1);
	vector<int> ret2 = solution(4, t1);
	vector<int> ret3 = solution(4, t1);
	
	printf("ret1\n");
	for( int i=0; i<ret1.size(); i++) {
		cout << ret1[i] <<	' ';
	}
	printf("\n");
	
	printf("ret2\n");
	for( int i=0; i<ret2.size(); i++) {
		cout << ret2[i] <<	' ';
	}
	printf("\n");
	
	printf("ret3\n");
	for( int i=0; i<ret3.size(); i++) {
		cout << ret3[i] <<	' ';
	}
	printf("\n");
	
	return 0;
	
}
