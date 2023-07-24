#include <iostream>
using namespace std;

void print99(int n) {
	cout << n << "´Ü" << endl;
	for (int i = 1; i < 10; i++)
		cout << n << " * " << i << " = " << n * i << endl;
	cout << endl;
}

void print99() {
	for (int i = 1; i < 10; i++) {
		cout << i << "´Ü" << endl;
		for (int j = 1; j < 10; j++)
			cout << i << " * " << j << " = " << i * j << endl;
		cout << endl;
	}
}

int main() {
	print99(3);
	print99();
	return 0;
}