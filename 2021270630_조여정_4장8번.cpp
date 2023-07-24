#include <iostream>
using namespace std;

class Circle {
	double radius;
public:
	void setRadius(double radius);
	double getArea();
};

void Circle::setRadius(double r) {
	radius = r;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	int n, count = 0; // n : ���� ����, count : ���� ���� ���� ���� ����
	double r; // r : ���� ������
	cout << "���� ���� >> ";
	cin >> n;
	if (n < 1) {
		cout << "������ ũ��(�迭 ��)�� ����� �Էµ��� �ʾҽ��ϴ�.";
		return 0;
	}

	Circle* pArr = new Circle[n];
	if (!pArr) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}
		
	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		pArr[i].setRadius(r);
		if (pArr[i].getArea() > 100)
			count++;
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << "\n";

	delete[] pArr;

	return 0;
}