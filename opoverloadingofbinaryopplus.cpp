#include <iostream>
using namespace std;
class A {
    int x;
public:
    A(int a) {
        x = a;
    }
    A operator+(A a) {
        A b(0);
        b.x = x + a.x;
        return b;
    }
    void show() {
        cout << x;
    }
};
int main() {
    A a(10);
    A b(20);
    A c = a + b;
    c.show();
    return 0;
}