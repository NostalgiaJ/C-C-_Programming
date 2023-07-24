#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius; 
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

string Circle::getName() {
	return name;
}

CircleManager::CircleManager(int size) {
	char name[20];
	int radius;
	this->size = size;
	
	if (size < 1) {
		cout << "변수의 크기(배열 수)로 양수가 입력되지 않았습니다.";
		exit(0);
	}
	p = new Circle[size];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		exit(0);
	}

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[]p;
}

void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;

	for (int i = 0; i < size; i++)
		if (p[i].getName() == name)
			cout << name << "의 면적은 " << p[i].getArea() << endl;
}

void CircleManager::searchByArea() {
	int area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;

	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++)
		if (p[i].getArea() > area)
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
}

int main() {
	int size;
	cout << "원의 개수 >> ";
	cin >> size;
	CircleManager cm(size);
	cm.searchByName();
	cm.searchByArea();

	return 0;
}