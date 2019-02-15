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
    //������ = ���������� ���������� Ŭ����x �����/ �������� ���� �����
    // ���������� ������ ������ ���� ��� �������� ������ 0
    int total_users = stages.size(); 
    vector<pair<int,int> > v(N+2); // ���������� <Ŭ����,���޼�>
    
    // ��� ��ȸ
    for(int i=0; i < total_users; i++){
        //����� �������� ��ȸ // j: �������� ��ȣ
        for(int j=1; j<= stages[i]; j++){
            if( j < stages[i]) {
                v[j].first++;//Ŭ���� ��� ��
                v[j].second++; 
            } else if(j == stages[i]) {
                v[j].second++; // ���޼�    
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
