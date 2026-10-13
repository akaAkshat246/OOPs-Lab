#include <iostream>
using namespace std;
class number {
    int x;
public:
    number(int a) {
        x = a;
    }
    friend ostream& operator<<(ostream& out, number n) {
        out << n.x;
        return out;
    }
};
int main() {
    number n(10);
    cout << n;

}