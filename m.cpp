#include <iostream>
using namespace std;

int sum3(int a, int b);

int main() {
	cout << "ayman " << endl;
	cout << "mohamed " << endl;
	int z;

	z = sum3(3, 4);
	cout << z << endl;
	return 0;

}


sum3(int a, int b) {
	int x;
	x = a + b;
	return x;
}