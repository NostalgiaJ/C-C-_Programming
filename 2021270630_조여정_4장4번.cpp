#include <iostream>
using namespace std;

class Sample {
    int* p;
    int size;
public:
    Sample(int n) {
        if (n < 1) {
            cout << "변수의 크기(배열 수)로 양수가 입력되지 않았습니다.";
            exit(0);
        }
        size = n; p = new int[n];
        if (!p) {
            cout << "메모리를 할당할 수 없습니다.";
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
    cout << "가장 큰 수는 " << s.big() << endl;
}