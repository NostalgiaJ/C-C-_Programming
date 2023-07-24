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
	cout << "이름: " << getName() << "\n국어: " << korean << "\n컴퓨터: " << computer << endl;
	cout << "수학: " << math << "\n-------------------\n";
	cout << "평균: " << getAverage() << "\n\n\n";
}

double SecondGrade::getAverage() {
	return ((double)korean + computer + science + moral) / 4;
}

void SecondGrade::display() {
	cout << "이름: " << getName() << "\n국어: " << korean << "\n컴퓨터: " << computer << endl;
	cout << "과학: " << science << "\n도덕: " << moral << "\n-------------------\n";
	cout << "평균: " << getAverage() << "\n\n\n";
}

double ThirdGrade::getAverage() {
	return ((double)korean + computer + english + history) / 4;
}

void ThirdGrade::display() {
	cout << "이름: " << getName() << "\n국어: " << korean << "\n컴퓨터: " << computer << endl;
	cout << "영어: " << english << "\n역사: " << history << "\n-------------------\n";
	cout << "평균: " << getAverage() << "\n\n\n";
}

int main()
{
	FirstGrade f("홍길동", 90, 81, 88); //이름, 국어 컴퓨터, 수학 점수 초기화
	SecondGrade s("장영실", 73, 91, 99, 68); // 이름, 국어 컴퓨터, 과학, 도덕 점수 초기화
	ThirdGrade t("정도전", 81, 53, 80, 96); // 이름, 국어, 컴퓨터, 영어, 국사 점수 초기화
	
	f.display();
	s.display();
	t.display();

	return 0;
}