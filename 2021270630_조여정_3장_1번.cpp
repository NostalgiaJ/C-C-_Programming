#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower();
	Tower(int height);
	int getHeight();
};

Tower::Tower() :Tower(1) {};
Tower::Tower(int h) {
	height = h;
};

int Tower::getHeight() {
	return height;
}

int main()
{
	Tower myTower; // 1미터
	Tower seoulTower(100); // 100미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

	return 0;
}