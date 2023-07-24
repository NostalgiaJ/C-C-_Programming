#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector();
	MyVector(int n, int val = 1);
	~MyVector() { delete[]mem; }
	void display();
};

MyVector::MyVector() {
	mem = new int[100];
	size = 100;
	for (int i = 0; i < size; i++) mem[i] = 0;
}

MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

void MyVector::display() {
	for (int i = 0; i < size; i++) cout << mem[i] << ' ';
	cout << endl;
}

int main() {
	MyVector v1;
	v1.display();
	MyVector v2(3);
	v2.display();
	MyVector v3(5, 5);
	v3.display();
}