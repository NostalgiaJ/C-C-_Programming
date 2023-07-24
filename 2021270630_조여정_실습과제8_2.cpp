#include <iostream>
#include <string>
using namespace std;

class Student {
	string name;
protected:
	int korean, computer;
	Student(string name, int korean, int computer) {
		this->name = name;
		this->korean = korean;
		this->computer = computer;
	}
public:
	string getName() { return name; }
};

class FirstGrade : public Student {
	int math;
public:
	FirstGrade(string name, int korean, int computer, int math) :Student(name, korean, computer) {
		this->math = math;
	}
	double getAverage();
	void display();
};

class SecondGrade : public Student {
	int science, moral;
public:
	SecondGrade(string name, int korean, int computer, int science, int moral) :Student(name, korean, computer) {
		this->science = science;
		this->moral = moral;
	}
	double getAverage();
	void display();
};

class ThirdGrade : public Student {
	int english, history;
public:
	ThirdGrade(string name, int korean, int computer, int english, int history) :Student(name, korean, computer) {
		this->english = english;
		this->history = history;
	}
	double getAverage();
	void display();
};

double FirstGrade::getAverage() {
	return ((double)korean + computer + math) / 3;
}

void FirstGrade::display() {
	cout << "�̸�: " << getName() << "\n����: " << korean << "\n��ǻ��: " << computer << endl;
	cout << "����: " << math << "\n-------------------\n";
	cout << "���: " << getAverage() << "\n\n\n";
}

double SecondGrade::getAverage() {
	return ((double)korean + computer + science + moral) / 4;
}

void SecondGrade::display() {
	cout << "�̸�: " << getName() << "\n����: " << korean << "\n��ǻ��: " << computer << endl;
	cout << "����: " << science << "\n����: " << moral << "\n-------------------\n";
	cout << "���: " << getAverage() << "\n\n\n";
}

double ThirdGrade::getAverage() {
	return ((double)korean + computer + english + history) / 4;
}

void ThirdGrade::display() {
	cout << "�̸�: " << getName() << "\n����: " << korean << "\n��ǻ��: " << computer << endl;
	cout << "����: " << english << "\n����: " << history << "\n-------------------\n";
	cout << "���: " << getAverage() << "\n\n\n";
}

int main()
{
	FirstGrade f("ȫ�浿", 90, 81, 88); //�̸�, ���� ��ǻ��, ���� ���� �ʱ�ȭ
	SecondGrade s("�念��", 73, 91, 99, 68); // �̸�, ���� ��ǻ��, ����, ���� ���� �ʱ�ȭ
	ThirdGrade t("������", 81, 53, 80, 96); // �̸�, ����, ��ǻ��, ����, ���� ���� �ʱ�ȭ
	
	f.display();
	s.display();
	t.display();

	return 0;
}