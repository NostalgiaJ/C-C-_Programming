#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() { cout << "�������� " << radius << "�� ��" << endl; }
};

void swap(Circle &a, Circle &b) {
	int swap = a.getRadius();
	a.setRadius(b.getRadius());
	b.setRadius(swap);
}

void increaseBy(Circle &a, Circle &b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main() {
	Circle x(10), y(5);

	swap(x, y);
	cout << "x : "; x.show();
	cout << "y: "; y.show();
	cout << endl;

	// x�� �������� 15�� ����
	increaseBy(x, y);
	cout << "x : "; x.show();
	cout << "y: "; y.show();
}