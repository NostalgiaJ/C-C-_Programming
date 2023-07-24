#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	Book(Book& book);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) {
	this->title = new char[strlen(title) + 1];
	if (!this->title)
		exit(0);
	strcpy(this->title, title);
	this->price = price;
}

Book::Book(Book& book) {
	this->title = new char[strlen(book.title) + 1];
	if (!this->title)
		exit(0);
	strcpy(this->title, book.title);
	this->price = book.price;
}

Book::~Book() {
	if(title)
		delete[]title;
}

void Book::set(const char* title, int price) {
	if (strlen(title) > strlen(this->title)) {
		delete[]this->title;
		this->title = new char[strlen(title) + 1];
	}
	strcpy(this->title, title);
	this->price = price;
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}