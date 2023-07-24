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
	int n, count = 0; // n : 원의 개수, count : 면적 조건 충족 원의 개수
	double r; // r : 원의 반지름
	cout << "원의 개수 >> ";
	cin >> n;
	if (n < 1) {
		cout << "변수의 크기(배열 수)로 양수가 입력되지 않았습니다.";
		return 0;
	}

	Circle* pArr = new Circle[n];
	if (!pArr) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
		
	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		pArr[i].setRadius(r);
		if (pArr[i].getArea() > 100)
			count++;
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << "\n";

	delete[] pArr;

	return 0;
}