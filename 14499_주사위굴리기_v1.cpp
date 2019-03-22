/*********************************************
	주사위 굴리기 
	https://www.acmicpc.net/problem/14499
*********************************************/

// r은 북쪽으로부터 떨어진 칸의 개수, c는 서쪽으로부터 떨어진 칸의 개수 
// 주사위가 놓여져 있는 곳의 좌표는 x, y
// 가장 처음 주사위 모든면에 0
// 지도의 각 칸에는 정수가 하나씩
// 이동한 칸에 쓰여 있는 수가 0이면, 주사위의 바닥면에 쓰여있는 수가 칸에 복사
// 0이 아닌 칸이면 칸에 있는 수가 주사위의 바닥면에 복사, 칸에 쓰여 있는 수는 0이 됨
// 주사위에 놓은 곳의 좌표와 이동시키는 명령이 주어질 때, 
// 주라사위가 이동했을 때마다 상단에 쓰여 있는 값을 구하는 프로그램을 작성하라
// 조건) 주사위는 지도의 바깥으로 이동시킬 수 없다. 

// 입력) 1. 지도의 세로크기 n, 가로크기 m, 주사위를 놓은 곳의좌표 x,y (1<= n,m <= 20 )
// 입력) 2. n개의 줄에 지도에 쓰여 있는 수가 부쪽부터 남쪽으로, 각줄은 서쪽부터 동쪽으로 주어진다.
// 		주사위를 놓은 칸에 쓰여 있는 수는 항상 0, 지도의 각 칸에 쓰여 있는 수는 10을 넘지않는 자연수
// 입력) 3. 이동하는 명령이 순서대로 주어진다. 동쪽: 1, 서쪽: 2, 북쪽: 3, 남쪽: 4

#include <iostream>
using namespace std;

int a[20][20];
int dice[7]; 
int dx[4] = {0,  0, -1, 1};
int dy[4] = {1, -1,  0, 0};

int main(void) {	
	int n, m, x, y, t;
	
	//입력: 지도의 세로가로, 주사위의 좌표, 명령의 개수 
	scanf("%d %d %d %d %d", &n, &m, &x, &y, &t);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf(" %d", &a[i][j]);
		}
	} 
	
	while(t--) {
		int k;
		scanf(" %d", &k);
		k--;
		int nx, ny;
		nx = x + dx[k];
		ny = y + dy[k];
		if(nx <0 || nx >= n || ny<0 || ny >=m ){
			// 바깥으로 이동하는 경우 무시 
			continue;
		}
		
        if (k == 0) { // right
            int temp = dice[1];
            dice[1] = dice[4];
            dice[4] = dice[6];
            dice[6] = dice[3];
            dice[3] = temp;
        } else if (k == 1) { // left
            int temp = dice[1];
            dice[1] = dice[3];
            dice[3] = dice[6];
            dice[6] = dice[4];
            dice[4] = temp;
        } else if (k == 2) { // up
            int temp = dice[1];
            dice[1] = dice[5];
            dice[5] = dice[6];
            dice[6] = dice[2];
            dice[2] = temp;
        } else { // down
            int temp = dice[1];
            dice[1] = dice[2];
            dice[2] = dice[6];
            dice[6] = dice[5];
            dice[5] = temp;
        }
        x=nx;
        y=ny;
        if( a[x][y] == 0 ) {
        	// 주사위를 굴렸을 때, 이동한 칸에 써 있는 수가 0이면, 주사위의 바닥면에 써 있는 수가 칸에 복사됨
        	a[x][y] = dice[6];
		}else{
			// 0이 아닌 경우에는 칸에 써 있는 수가 주사위의 바닥면으로 복사되며,
			dice[6]=a[x][y];
			// 칸에 써 있는 수는 0이 복사됨
			a[x][y]=0;
		}
        printf("%d\n", dice[1]);
	} 
	
	return 0;
} 
