#include <bits/stdc++.h>
using namespace std;
class base
{
    protected:
        int a;
public:
    base(int x)
    {
        a=x;
    }
};
class derived:public base
{
    int b;
public:
    derived(int x, int y):base(x)
    {
        b=y;
    }
    void display()
    {
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }
};
int main()
{
    derived d(10, 20);
    d.display();
    return 0;
}