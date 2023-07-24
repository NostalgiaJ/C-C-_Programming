#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};
class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int x = 0, int y = 0, string color = "Black") : Point(x, y) { this->color = color; }
	void show();
	void setPoint(int x, int y);
	void setColor(string color);
};

void ColorPoint::show() {
	cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
}

void ColorPoint::setPoint(int x, int y) {
	move(x, y);
}

void ColorPoint::setColor(string color) {
	this->color = color;
}

int main() {
	ColorPoint cp1(5, 5, "RED");
	cp1.show();
	cp1.setPoint(10, 20);
	cp1.setColor("BLUE");
	cp1.show();
	
	ColorPoint cp2(5, 5); //BLACK�� ��ǥ�� (5, 5)�� �ʱ�ȭ
	cp2.show();
	cp2.setPoint(3, 7);
	cp2.setColor("GREEN");
	cp2.show(); // cp�� ����Ѵ�.
	
	ColorPoint zeroPoint; // BLACK�� (0, 0) ��ġ�� ��
	zeroPoint.show(); // zeroPoint�� ����Ѵ�.
	
	return 0;
}