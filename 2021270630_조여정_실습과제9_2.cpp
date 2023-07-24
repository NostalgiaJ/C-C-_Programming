#include <iostream>
using namespace std;

template <class T>
class Circle {
	T radius;
public:
	Circle(T radius = 1) { this->radius = radius; }
	T getRadius() { return radius; }
};

template <class T>
T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;

	Circle<int> waffle(10), pizza(20), y;
	y = bigger(waffle.getRadius(), pizza.getRadius());
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}