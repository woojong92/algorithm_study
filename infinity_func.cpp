#include <iostream>
#include <limits>
#include <cmath>
using namespace std;
int main(){
	/* ������ */
	cout << numeric_limits<int>::max() << endl; //2,147,483,647
	cout << numeric_limits<int>::min() << endl; // -2,147,483,648
	if (numeric_limits<int>::max() > 100000)
		cout << "Bigger" << endl; //must be printed
	if (numeric_limits<int>::min() < -100000)
		cout << "Smaller" << endl; //must be printed
	/* ��¥ ���Ѵ� */
	cout << numeric_limits<float>::infinity() << endl; //1.#INF.
	if (numeric_limits<double>::infinity() > 100000)
		cout << "Bigger" << endl; //must be printed
	return 0;
}
