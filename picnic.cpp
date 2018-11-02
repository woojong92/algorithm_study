#include <iostream>

int n;
bool areFriends[10][10];

/*
//잘못된 재귀 호출코드 
//taken[i] = i번째 학생이 짝을 이미 찾았으면 true, 아니면 false
int countPairing(bool taken[10]) { 
	//기저 사례: 모든 학생이 짝을 찾았으면 한가지 방법을 찾았으니 종료한다.
	bool finished = true;
	for(int i=0; i<n; ++i) if(!taken[i]) finished =false;
	if(finished) return 1; 
	int ret=0;
	//서로 친구인 두 학생을 찾아 짝을 지어 준다.
	for(int i =0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(!taken[i] && !taken[j] && areFriends[i][j]) {
				taken[i] = taken[j] = true;
				ret += countPairings(taken);
				taken[i] = taken[j] =false;
			}
		}
	} 
	return ret;
} 
*/


//taken[i] = i번째 학생이 짝을 이미 찾았으면 true, 아니면 false
int countPairing(bool taken[10]) {
	//남은 학생들 중 가장 번호가 빠른 학생을 찾는다.
	int firstFree = -1;
	
	for(int i = 0; i < n; ++i){
		if(!taken[i]){
			firstFree = i;
			break;
		}
	} 
	//기저 사례: 모든 학생이 짝을 찾았으면 한가지 방법을 찾았으니 종료한다.
	if(firstFree == -1) return 1;
	int ret = 0 ;
	//이 학생과 짝지을 학생을 결정한다.
	for(int pairWith = firstFree+1; pairWith < n; ++pairWith){
		if(!taken[pairWith] && areFriends[firstFree][pairWith]) {
			taken[firstFree] = taken[pairWith] = true;
			ret += countPairings(taken);
			taken[firstFree] = taken[pairWith] =false;
		}
	} 
	return ret;
} 
