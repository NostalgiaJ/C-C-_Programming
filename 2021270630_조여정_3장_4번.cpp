#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
	string variety; // 커피 종류
	void warning(string variety) { cout << endl << "재료가 부족하여 " << variety << "를 만들 수 없습니다." << endl, show(); }
public:
	CoffeeMachine(int coffee, int water, int sugar);
	void drinkAmericano(); // 아메리카노
	void drinkSugarCoffee(); // 설탕커피
	void drinkEspresso(); // 에스프레소
	void show() { cout << "커피머신 상태 : 커피 = " << coffee << "  물 = " << water << "  설탕 = " << sugar << endl; }
	void fill() { coffee = 10, water = 10, sugar = 10; }
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) { coffee = c, water = w, sugar = s; } // CoffeeMachine(); 기본 생성자 생략

void CoffeeMachine::drinkAmericano() {
	variety = "아메리카노";
	if (coffee < 1 || water < 2) // 커피나 물이 부족할 때
		warning(variety); // 경고문 호출
	else
		coffee -= 1, water -= 2; // 커피1, 물2 줄어듬
}
void CoffeeMachine::drinkSugarCoffee() {
	variety = "설탕커피";
	if (coffee < 1 || water < 2 || sugar < 1) // 커피나 물이나 설탕이 부족할 때
		warning(variety);
	else
		coffee -= 1, water -= 2, sugar -= 1;// 커피1, 물2, 설탕1 줄어듬
}
void CoffeeMachine::drinkEspresso() {
	variety = "에스프레소";
	if (coffee < 1 || water < 1) // 커피나 물이 부족할 때
		warning(variety);
	else
		coffee -= 1, water -= 1; // 커피1, 물1 줄어듬
}

int main()
{
	CoffeeMachine java(5, 8, 2); // 커피량:5, 물량:8, 설탕:2로 초기화
		
	java.drinkAmericano(); // 커피1, 물2 소비
	java.show(); // 커피 머신의 상태 출력
	
	java.drinkSugarCoffee(); // 커피1, 물2, 설탕1 소비
	java.show();

	java.drinkEspresso(); // 커피1, 물1 소비
	java.show();

	java.drinkSugarCoffee();
	java.show(); 

	java.drinkSugarCoffee(); 

	java.drinkAmericano();

	java.fill(); // 커피10, 물10, 설탕10으로 채움
	java.show();

	return 0;
}