/**************************************************
	프로그래머스 2018 윈터코딩 방문길이 
**************************************************/

#include <string>
#include <iostream>
using namespace std;

int solution(string dirs)
{
    int x=5, y=5;
    // 0: U, 1: D, 2: R, 3: L
    int check[11][11][4]={0};
   
    int cnt = 0;
    
    for( char c : dirs ) {
        if( c=='U' ){
            if( y-1 >= 0 ) {
                if( check[x][y][0] == 0) {
                    cnt++;
                    check[x][y][0] = 1; 
                    check[x][--y][1] = 1;
                }else{
                    y--;
                }
            }
        }else if( c == 'D') {
            if( y+1 < 11 ) {
                if( check[x][y][1] == 0) {
                    cnt++;
                    check[x][y][1] = 1;
                    check[x][++y][0] = 1;
                }else{
                    y++;
                }            
            }
        }else if( c == 'R') {
            if( x+1 < 11 ) {
                if( check[x][y][2] == 0) {
                    cnt++;
                    check[x][y][2] = 1;
                    check[++x][y][3] = 1;
                }else{
                    x++;
                }
            }
        }else if( c == 'L') {
            if( x-1 >= 0 ) {
                if( check[x][y][3] == 0) {
                    cnt++;
                    check[x][y][3] = 1;
                    check[--x][y][2] = 1;
                } else{
                    x--;
                }         
            }
        }
    }
    
    int answer = cnt;
	return answer;
}
