#include <iostream>
using namespace std;

int main() {
	int* pInt = new int[5];
	if (!pInt) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	double sum = 0;

	cout << "���� 5�� �Է�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> pInt[i];
		sum += pInt[i];
	}
	cout << "��� " << sum / 5;

	delete[] pInt;

	return 0;
}