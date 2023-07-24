#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char *title;
	int price;
public:
	Book(const char* title, int price);
	Book(const Book& b);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) {
	int len = strlen(title) + 1;
	this->title = new char[len];
	strcpy_s(this->title, len, title);

	this->price = price;
}

Book::Book(const Book& b) {
	int len = strlen(b.title) + 1;
	this->title = new char[len];
	strcpy_s(this->title, len, b.title);

	this->price = b.price;
}

Book::~Book() {
	delete[] title;
}

void Book::set(const char* title, int price) {
	int len = strlen(title) + 1;
	if (len > strlen(this->title)) {
		delete[] this->title;

		this->title = new char[len];
	}

	strcpy_s(this->title, len, title);
	this->price = price;
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}