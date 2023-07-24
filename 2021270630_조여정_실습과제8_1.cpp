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
	cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다." << endl;
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
	
	ColorPoint cp2(5, 5); //BLACK에 좌표값 (5, 5)로 초기화
	cp2.show();
	cp2.setPoint(3, 7);
	cp2.setColor("GREEN");
	cp2.show(); // cp를 출력한다.
	
	ColorPoint zeroPoint; // BLACK에 (0, 0) 위치의 점
	zeroPoint.show(); // zeroPoint를 출력한다.
	
	return 0;
}