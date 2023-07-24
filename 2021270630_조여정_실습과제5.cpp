#include <iostream>
using namespace std;

class Complex {
	int real; //실수부
	int imaginary; //허수부
public:
	Complex() { real = imaginary = 0; }
	Complex(int r, int i) { real = r; imaginary = i; }
	friend ostream& operator << (ostream& stream, Complex op2);
	Complex operator+(const Complex op2);
	Complex operator*(const Complex op2);
	Complex operator-=(const Complex op2);
	Complex operator~();
	bool operator!=(const Complex op2);
	Complex operator--(int notused);
	Complex operator++();
};

ostream& operator << (ostream& stream, Complex op2)
{
	stream << op2.real;
		if (op2.imaginary >= 0)
			stream << "+";
	stream << op2.imaginary << "i";

	return stream;
}

Complex Complex::operator+(const Complex op2) {
	Complex temp;
	temp.real = op2.real + real;
	temp.imaginary = op2.imaginary + imaginary;
	return temp;
}

Complex Complex::operator*(const Complex op2) {
	Complex temp;
	temp.real = op2.real * real - op2.imaginary * imaginary;
	temp.imaginary = op2.real * imaginary + op2.imaginary * real;
	return temp;
}

Complex Complex::operator-=(const Complex op2) {
	real -= op2.real;
	imaginary -= op2.imaginary;
	return *this;
}

Complex Complex::operator~() {
	Complex temp;
	temp.real = this->real;
	temp.imaginary = -(this->imaginary);
	return temp;
}

bool Complex::operator!=(const Complex op2) {
	if (real == op2.real && imaginary == op2.imaginary)
		return false;
	else
		return true;
}

Complex Complex::operator--(int notused) {
	Complex temp = *this;
	this->real -= 1;
	return temp;
}

Complex Complex::operator++() {
	real++;
	return *this;
}

int main()
{
	Complex a(-5, 7), b(2, -3), c;

	c = a + b;
	cout << "[c = a + b 실행 후]\n";
	cout << "a + b = (" << a << ") + (" << b << ") = " << c << "\n\n";
	
	c = a * b;
	cout << "[c = a * b 실행 후]\n";
	cout << "a * b = (" << a << ") * (" << b << ") = " << c << "\n\n";
	
	a -= b;
	cout << "[a -= b 실행 후]\n";
	cout << "a = " << a << "\t b = " << b << "\n\n";
	
	c = ~b;
	cout << "[c = ~ b 실행 후]\n";
	cout << "c = " << c << "\t b = " << b << "\n\n";
	
	if (c != b) cout << "[c != b]\n\n";
	
	c = b--;
	cout << "[c = b-- 실행 후]\n";
	cout << "c = " << c << "\t b = " << b << "\n\n";
	
	c = ++b;
	cout << "[c = ++b 실행 후]\n";
	cout << "c = " << c << "\t b = " << b << "\n\n";
	
	return 0;
}
