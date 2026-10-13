#include <bits/stdc++.h>
using namespace std;
class A {
protected:
    int x;
public:
    void setX(int a) {
        x = a;
    }
    void showX() {
        cout << "x = " << x << endl;
    }
};
class B : public A {
protected:
    int y;
public:
    void setY(int b) {
        y = b;
    }
    void showY() {
        cout << "y = " << y << endl;
    }
};
class C : public B {
    int z;

public:
    void setZ(int c) {
        z = c;
    }
    void showZ() {
        cout << "z = " << z << endl;
    }
};
int main() {
    cout << "Single Inheritance\n";
    B obj1;
    obj1.setX(10);
    obj1.setY(20);
    obj1.showX();
    obj1.showY();
    cout << "\nMultilevel Inheritance\n";
    C obj2;
    obj2.setX(10);
    obj2.setY(20);
    obj2.setZ(30);
    obj2.showX();
    obj2.showY();
    obj2.showZ();

    return 0;
}