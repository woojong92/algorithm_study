/************************************************************
	APSS - 6.8 �ð� ���߱� ������ �ذ��ϴ� ���� Ž�� �˰���
*************************************************************/

const int INF =9999, SWITCHES = 10, CLOCKS = 16
//linked[i][j] = 'x': i�� ����ġ�� j�� �ð谡 ����Ǿ� �ִ�.
//linked[i][j] = '.': i�� ����ġ�� j�� �ð谡 ����Ǿ� ���� �ʴ�.
const char linked[SWITCHES][CLOCKS+1] = {
//0123456789012345
	"XXX............."
	"...X...X.X.X...."
	"....X.....X...XX"
	"X...XXXX........"
	"......XXX.X.X..."	
	"X.X...........XX"
	"...X..........XX"
	"....XX.X......XX"
	".XXXXX.........."
	"...XXX...X...X.."
} 
//��� �ð谡 12�ø� ����Ű�� �ִ��� Ȯ���Ѵ�.	
bool areAliged(const vector<int>& clock);
//swtch�� ����ġ�� ������.
void push(vector<int>& clock, int swtch) {
	for(int clock = 0; clock < CLOCKS; ++clock){
		if(linked[swtch][clock]=='x'){
			clocks[clock] += 3;
			if(clocks[clock] == 15) clocks[clock] =3;
		}
	}
} 

//clocks: ���� �ð���� ����
//swtch: �̹��� ���� ����ġ�� ��ȣ
//�� �־�����, ���� ����ġ���� ������ clocks�� 12�÷� ���� �� �ִ� �ּ� Ƚ���� ��ȯ�Ѵ�.
//���� �Ұ����ϴٸ� INF �̻��� ū ���� ��ȯ�Ѵ�.
int solve(vector<int>& clocks, int swtch) {
	if(swtch == SWITCHES) return areAligned(clock) ? 0 : INF;
	//�� ����ġ�� 0��  ������ ������ �� �� ������ �������� ��� �õ��Ѵ�.
	int ret =INF;
	for(int cnt =0 ; cnt < 4; ++cnt){
		ret = min(ret, cnt + solve(clocks, swtch+1));
		push(clocks, swtch);
	} 
	//push(clocks, swtch)�� �� �� ȣ��Ǿ����� clocks�� ������ ���� ���°� �ȴ�.
	return ret; 
}
 













