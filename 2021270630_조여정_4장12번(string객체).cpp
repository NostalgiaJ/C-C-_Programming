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
		cout << "������ ũ��(�迭 ��)�� ����� �Էµ��� �ʾҽ��ϴ�.";
		exit(0);
	}
	p = new Circle[size];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		exit(0);
	}

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

CircleManager::~CircleManager() {
	delete[]p;
}

void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < size; i++)
		if (p[i].getName() == name)
			cout << name << "�� ������ " << p[i].getArea() << endl;
}

void CircleManager::searchByArea() {
	int area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;

	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++)
		if (p[i].getArea() > area)
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
}

int main() {
	int size;
	cout << "���� ���� >> ";
	cin >> size;
	CircleManager cm(size);
	cm.searchByName();
	cm.searchByArea();

	return 0;
}