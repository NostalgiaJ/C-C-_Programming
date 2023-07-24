#include <iostream>
using namespace std;

class Circle {
	int radius;
	char name[20];
public:
	void setCircle(char* name, int radius);
	double getArea();
	char* getName();
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

void Circle::setCircle(char* name, int radius) {
	for (int i = 0; i < 20; i++)
		this->name[i] = name[i];
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

char* Circle::getName() {
	char *q = new char;
	if (!q) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		exit(0);
	}
	q = this->name;
	return q;
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