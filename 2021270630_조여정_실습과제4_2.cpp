#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	int size = sizeof(a);
	for (int i = 0; i < size; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
		else
			success = false;
	}
}

int main() {
	char s[] = "Mike";
	bool b;
	char& loc1 = find(s, 'k', b);
	if (b == false) {
		cout << "k을 발견할 수 없다" << endl;
		return 0;
	}
	loc1 = 'm'; // 'k' 위치에 'm' 기록
	cout << s << endl; // "mime"가 출력됨

	char& loc2 = find(s, 'k', b);
	if (b == false) {
		cout << "k을 발견할 수 없다" << endl;
		return 0;
	}
	loc2 = 'm'; // 'k' 위치에 'm' 기록
	cout << s << endl;
}