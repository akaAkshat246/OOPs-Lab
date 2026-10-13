#include <iostream>
using namespace std;
class Shape {
public:
    double x, y;
    void get_data() {
        cin >> x >> y;
    }
    virtual void display_area()=0;
};
class Rectangle : public Shape {
public:
    void display_area() {
        cout <<"Rectangle : "<<x * y << endl;
    }
};
class Triangle : public Shape {
public:
    void display_area() {
        cout <<"Triangle :"<<0.5 * x * y << endl;
    }
};
int main() {
    Shape *ptr;
    Rectangle r;
    Triangle t;
    int choice;
    cin >> choice;
    if (choice == 1) {
        ptr = &r;
        ptr->get_data();
        ptr->display_area();
    }
    else if (choice == 2) {
        ptr = &t;
        ptr->get_data();
        ptr->display_area();
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}