#include <iostream>
using namespace std;

template <class T>
void reverseArray(T &a, int b) {
	T temp;
	for (int i = 0; i < b / 2; i++) {
		temp[i] = a[b - i - 1];
		a[b - i - 1] = a[i];
		a[i] = temp[i];
	}
}

template <class T>
void display(T a[], int b) {
	for (int i = 0; i < b; i++)
		cout << a[i] << "  ";
	cout << endl;
}

int main() {
	int x[] = { 1, 10, 100, 1000 };
	reverseArray(x, 4);
	cout << "x = ";
	display(x, 4);

	double y[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	reverseArray(y, 6);
	cout << "y = ";
	display(y, 6);

	char str[20] = "C++ is powerful";
	reverseArray(str, strlen(str));
	cout << "str = " << str << endl;

	return 0;
}