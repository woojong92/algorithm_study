#include <iostream>
#include <array>
using namespace std;

int main() {
	array<double, 10> values {0.5, 1.3, 2.3};
	double total {};
	for( size_t i {} ; i < values.size() ; i++ ){
		total += values[i];
	}
	
	cout << total << '\n';
	return 0;
}
