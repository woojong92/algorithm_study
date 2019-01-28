/*******************************************************************
	2017카카오코드 예선 - 카카오프렌즈 컬러링북 
********************************************************************/

#include <vector>
#include <algorithm>

using namespace std;

int a[100][100];
int d[100][100];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int h=1,w=1;
vector<int> ans;

void dfs(int x, int y, int step){

    d[x][y] = step;

    for(int k=0; k<4; k++){
        int nx = x+dx[k];
        int ny = y+dy[k];
        if(nx >= 0 && nx <w && ny >=0 && ny < h){
            if(a[nx][ny]==a[x][y] && d[nx][ny]==0){
                dfs(nx, ny, step);
            }
        }
     }

}


// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    w=m, h=n;
    ans = vector<int>(m*n, 0);    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            a[i][j] = picture[i][j];
            d[i][j] = 0;
        }
    }

    int step =0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] != 0 && d[i][j]==0){
                dfs(i,j,++step);
            }
        }
    }    

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            ans[d[i][j]] += 1;
        }
    } 

    sort(ans.begin()+1, ans.begin()+step+1);

    int number_of_area = step;
    int max_size_of_one_area = ans[step];

    vector<int> answer(2);
    answer[0] = number_of_area; //영역의 수
    answer[1] = max_size_of_one_area; //가장 큰 영역은 몇 칸으로 이루어 져 있는가?
    return answer;
}













