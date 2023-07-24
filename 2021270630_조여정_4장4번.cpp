#include <iostream>
using namespace std;

class Sample {
    int* p;
    int size;
public:
    Sample(int n) {
        if (n < 1) {
            cout << "������ ũ��(�迭 ��)�� ����� �Էµ��� �ʾҽ��ϴ�.";
            exit(0);
        }
        size = n; p = new int[n];
        if (!p) {
            cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
            exit(0);
        }
    }
    void read();
    void write(); 
    int big();
    ~Sample();
};

void Sample::read() {
    for (int i = 0; i < size; i++)
        cin >> p[i];
}

void Sample::write() {
    for (int i = 0; i < size; i++)
        cout << p[i] << " ";
    cout << "\n";
}

int Sample::big() {
    int max = 0;
    for (int i = 0; i < size; i++)
        if (max < p[i])
            max = p[i];
    return max;
}

Sample::~Sample() { delete[] p; }

int main() {
    Sample s(10);
    s.read();
    s.write();
    cout << "���� ū ���� " << s.big() << endl;
}