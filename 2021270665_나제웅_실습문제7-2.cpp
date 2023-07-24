#include <iostream> 
using namespace std;

class Fraction {
	int num; // 분자(numerator)
	int denom; // 분모(denominator)
public:
	Fraction(int n = 1, int d = 1) { num = n; denom = d; }
	Fraction operator +(Fraction C);
	bool operator ==(Fraction C);
	Fraction operator ^(int number);
	Fraction operator ++(int number);
	Fraction& operator *=(Fraction C);
	friend ostream& operator <<(ostream& stream, Fraction C);
	friend bool operator <(Fraction C1, Fraction C2);
	friend Fraction operator /(int number, Fraction C);
	friend Fraction operator ~(Fraction C);
	friend Fraction& operator --(Fraction& C);
};

Fraction Fraction::operator +(Fraction C)
{
	Fraction T;
	T.num = (num * C.denom) + (C.num * denom);
	T.denom = denom * C.denom;
	return T;
}
bool Fraction::operator ==(Fraction C)
{
	if ((num * C.denom) == (denom * C.num))
		return true;
	else
		return false;
}
Fraction Fraction::operator ^(int number)
{
	Fraction T;
	for (int i = 0; i < number; i++)
	{
		T.num = T.num * num;
		T.denom = T.denom * denom;
	}
	return T;
}
Fraction Fraction::operator ++(int number)
{
	Fraction T = *this;
	num = num + denom;
	return T;
}
Fraction& Fraction::operator *=(Fraction C)
{
	this->num = this->num * C.num;
	this->denom = this->denom * C.denom;
	return *this;
}

ostream& operator << (ostream& stream, Fraction C)
{
	stream << C.num << "/" << C.denom;
	return stream;
}

bool operator <(Fraction C1, Fraction C2)
{
	if (C1.num * C2.denom < C2.num * C1.denom)
		return true;
	else
		return false;
}

Fraction operator /(int number, Fraction C)
{
	Fraction T;
	T.num = number * C.denom;
	T.denom = C.num;
	return T;
}

Fraction operator ~(Fraction C)
{
	Fraction T;
	T.num = C.denom;
	T.denom = C.num;
	return T;
}

Fraction& operator --(Fraction& C)
{
	C.num = C.num - C.denom;
	return C;
}

int main()
{
	Fraction f1(3, 4), f2(2, 5), f3, f4(7, 15), f5(6, 15);

	f3 = f1 + f2;
	cout << f1 << " + " << f2 << " = " << f3 << "\n\n";
	
	if (f2 == f5) cout << f2 << " == " << f5 << "\n\n";
	if (f2 == f4) cout << f2 << " == " << f4 << "\n\n";

	if (f2 < f1) cout << f2 << " < " << f1 << "\n\n";
	
	f1 *= f2;
	cout << "f1 *= f2 ===> f1 = " << f1 << "\n\n";

	f3 = f2 ^ 3;
	cout << "( " << f2 << " )^3 = " << f3 << "\n\n";

	f3 = 5 / f2;
	cout << "5 / (" << f2 << ") = " << f3 << "\n\n";

	f3 = ~f2;
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