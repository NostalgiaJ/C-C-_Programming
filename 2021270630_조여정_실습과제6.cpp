#include <iostream>
using namespace std;

class Fraction {
	int num; // 분자(numerator)
	int denom; // 분모(denominator)
public:
	Fraction(int n = 1, int d = 1) { num = n; denom = d; }
	Fraction operator+(Fraction op2);
	bool operator==(Fraction op2);
	Fraction operator^(int op2);
	Fraction operator++(int notused);
	Fraction operator*=(Fraction op2);
	friend ostream& operator<< (ostream& stream, Fraction op2);
	friend bool operator<(Fraction op1, Fraction op2);
	friend Fraction operator/(int op1, Fraction op2);
	friend Fraction operator~(Fraction op2);
	friend Fraction operator--(Fraction &op2);
};

Fraction Fraction::operator+(Fraction op2) {
	Fraction temp(op2.num * denom + op2.denom * num, op2.denom * denom);
	return temp;
}

bool Fraction::operator==(Fraction op2) {
	if (num * op2.denom == denom * op2.num)
		return true;
	else
		return false;
}

Fraction Fraction::operator^(int op2) {
	Fraction temp;
	for (int i = 0; i < op2; i++) {
		temp.num *= num;
		temp.denom *= denom;
	}
	return temp;
}

Fraction Fraction::operator++(int notused) {
	Fraction temp = *this;
	this->num += denom;
	return temp;
}

Fraction Fraction::operator*=(Fraction op2) {
	num *= op2.num;
	denom *= op2.denom;
	return *this;
}

ostream& operator << (ostream& stream, Fraction op2) {
	stream << op2.num << "/" << op2.denom;
	return stream;
}

bool operator<(Fraction op1, Fraction op2) {
	if (op1.num * op2.denom < op1.denom * op2.num)
		return true;
	else
		return false;
}

Fraction operator/(int op1, Fraction op2) {
	Fraction temp(op1 * op2.denom, op2.num);
	return temp;
}

Fraction operator~(Fraction op2) {
	Fraction temp;
	temp.denom = op2.num;
	temp.num = op2.denom;
	return temp;
}

Fraction operator--(Fraction &op2) {
	op2.num -= op2.denom;
	return op2;
}

int main()
{
	Fraction f1(3, 4), f2(2, 5), f3, f4(7, 15), f5(6, 15);

	f3 = f1 + f2; //분수 + 분수
	cout << f1 << " + " << f2 << " = " << f3 << "\n\n";
	
	if (f2 == f5) cout << f2 << " == " << f5 << "\n\n";
	if (f2 == f4) cout << f2 << " == " << f4 << "\n\n";
	
	if (f2 < f1) cout << f2 << " < " << f1 << "\n\n";
	
	f1 *= f2; //분수 *= 분수
	cout << "f1 *= f2 ===> f1 = " << f1 << "\n\n";
	
	f3 = f2 ^ 3; // 분수 ^ 정수 (분수의 정수 제곱승 구현)
	cout << "( " << f2 << " )^3 = " << f3 << "\n\n";
	
	f3 = 5 / f2; // 정수 / 분수
	cout << "5 / (" << f2 << ") = " << f3 << "\n\n";
	
	f3 = ~f2; // ~ 분수(분수의 역수 계산)
	cout << "~( " << f2 << " ) = " << f3 << "\n\n";
	
	cout << "(" << f1 << ")++ = ";
	f4 = f1++;
	cout << f1 << "\n";
	cout << "후위 연산 수행 후, f4 = " << f4 << "\n\n";
	
	cout << "--(" << f2 << ") = ";
	f4 = --f2;
	cout << f2 << "\n";
	cout << "전위 연산 수행 후, f4 = " << f4 << "\n\n";;
	
	return 0;
}