#include <iostream>
using namespace std;
int sum4(int a, int b);
int main() {
	cout << "ayman " << endl;
	cout << "mohamed " << endl;
	int z;
	z = sum4(3, 4);
	cout << z << endl;
	return 0;

}

sum4(int a, int b) {
	int x;
	x = a + b;
	return x;
}