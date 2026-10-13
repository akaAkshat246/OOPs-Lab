#include <iostream>
using namespace std;

class Number {
    int x;
public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }

    void add(Number n) {
        cout<< x + n.x << endl;
    }
};
int main() {
    Number n1, n2;
    n1.getData();
    n2.getData();
    n1.add(n2);  
    return 0;
}
