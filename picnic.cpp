#include <iostream>

int n;
bool areFriends[10][10];

/*
//�߸��� ��� ȣ���ڵ� 
//taken[i] = i��° �л��� ¦�� �̹� ã������ true, �ƴϸ� false
int countPairing(bool taken[10]) { 
	//���� ���: ��� �л��� ¦�� ã������ �Ѱ��� ����� ã������ �����Ѵ�.
	bool finished = true;
	for(int i=0; i<n; ++i) if(!taken[i]) finished =false;
	if(finished) return 1; 
	int ret=0;
	//���� ģ���� �� �л��� ã�� ¦�� ���� �ش�.
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


//taken[i] = i��° �л��� ¦�� �̹� ã������ true, �ƴϸ� false
int countPairing(bool taken[10]) {
	//���� �л��� �� ���� ��ȣ�� ���� �л��� ã�´�.
	int firstFree = -1;
	
	for(int i = 0; i < n; ++i){
		if(!taken[i]){
			firstFree = i;
			break;
		}
	} 
	//���� ���: ��� �л��� ¦�� ã������ �Ѱ��� ����� ã������ �����Ѵ�.
	if(firstFree == -1) return 1;
	int ret = 0 ;
	//�� �л��� ¦���� �л��� �����Ѵ�.
	for(int pairWith = firstFree+1; pairWith < n; ++pairWith){
		if(!taken[pairWith] && areFriends[firstFree][pairWith]) {
			taken[firstFree] = taken[pairWith] = true;
			ret += countPairings(taken);
			taken[firstFree] = taken[pairWith] =false;
		}
	} 
	return ret;
} 
