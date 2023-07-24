#include <iostream>
using namespace std;

int main() {
	int* pInt = new int[5];
	if (!pInt) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	double sum = 0;

	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> pInt[i];
		sum += pInt[i];
	}
	cout << "평균 " << sum / 5;

	delete[] pInt;

	return 0;
}