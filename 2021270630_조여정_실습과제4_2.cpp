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
		cout << "k�� �߰��� �� ����" << endl;
		return 0;
	}
	loc1 = 'm'; // 'k' ��ġ�� 'm' ���
	cout << s << endl; // "mime"�� ��µ�

	char& loc2 = find(s, 'k', b);
	if (b == false) {
		cout << "k�� �߰��� �� ����" << endl;
		return 0;
	}
	loc2 = 'm'; // 'k' ��ġ�� 'm' ���
	cout << s << endl;
}