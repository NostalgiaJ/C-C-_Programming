#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
	string variety; // Ŀ�� ����
	void warning(string variety) { cout << endl << "��ᰡ �����Ͽ� " << variety << "�� ���� �� �����ϴ�." << endl, show(); }
public:
	CoffeeMachine(int coffee, int water, int sugar);
	void drinkAmericano(); // �Ƹ޸�ī��
	void drinkSugarCoffee(); // ����Ŀ��
	void drinkEspresso(); // ����������
	void show() { cout << "Ŀ�Ǹӽ� ���� : Ŀ�� = " << coffee << "  �� = " << water << "  ���� = " << sugar << endl; }
	void fill() { coffee = 10, water = 10, sugar = 10; }
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) { coffee = c, water = w, sugar = s; } // CoffeeMachine(); �⺻ ������ ����

void CoffeeMachine::drinkAmericano() {
	variety = "�Ƹ޸�ī��";
	if (coffee < 1 || water < 2) // Ŀ�ǳ� ���� ������ ��
		warning(variety); // ��� ȣ��
	else
		coffee -= 1, water -= 2; // Ŀ��1, ��2 �پ��
}
void CoffeeMachine::drinkSugarCoffee() {
	variety = "����Ŀ��";
	if (coffee < 1 || water < 2 || sugar < 1) // Ŀ�ǳ� ���̳� ������ ������ ��
		warning(variety);
	else
		coffee -= 1, water -= 2, sugar -= 1;// Ŀ��1, ��2, ����1 �پ��
}
void CoffeeMachine::drinkEspresso() {
	variety = "����������";
	if (coffee < 1 || water < 1) // Ŀ�ǳ� ���� ������ ��
		warning(variety);
	else
		coffee -= 1, water -= 1; // Ŀ��1, ��1 �پ��
}

int main()
{
	CoffeeMachine java(5, 8, 2); // Ŀ�Ƿ�:5, ����:8, ����:2�� �ʱ�ȭ
		
	java.drinkAmericano(); // Ŀ��1, ��2 �Һ�
	java.show(); // Ŀ�� �ӽ��� ���� ���
	
	java.drinkSugarCoffee(); // Ŀ��1, ��2, ����1 �Һ�
	java.show();

	java.drinkEspresso(); // Ŀ��1, ��1 �Һ�
	java.show();

	java.drinkSugarCoffee();
	java.show(); 

	java.drinkSugarCoffee(); 

	java.drinkAmericano();

	java.fill(); // Ŀ��10, ��10, ����10���� ä��
	java.show();

	return 0;
}