//보글 게임판에서 단어를 찾는 재귀호출 알고리즘
//간결한 코드를 작성하는 팁: 입력이 잘못되거나 범위에서 벗어난 경우도 
//기저사례로 택해서 맨 처음에 처리하는 것 

#include <iostream>

const int dx[8] = { -1, -1, -1,  1, 1, 1,  0, 0};
const int dy[8] = { -1,  0,  1, -1, 0, 1, -1, 1};
//5x5의 보글 게임 판의 해당 위치에서 주어진 단어가 시작하는지를 반환
bool hasWord( int y, int x, const string& word){
	//기저사례1: 시작 위치가 범위 밖이면 무조건 실패
	if(!inRange(y,x))	return false; 
	//기저사례2: 첫 글자가 일치하지 않으면 실패
	if(board[y][x] != word[0]) return false;
	//기저사례3: 단어 길이가 1이면 성공
	if(word.size() == 1) return true;
	//인접한 여덟 칸을 검사한다.
	for( int direction = 0; direction < 8; diredtion++){
		int nextY = y +dy[direction], nextX = x + dx[direction];
		//다음 칸이 범위 안에 있는지, 첫 글자는 일치하는지 확인할 필요가 없다.
		if(hasWord(nextY, nextX, word.substr(1))) 
			return true;
	} 
	return false; 
} 
