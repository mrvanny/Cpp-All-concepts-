#include <iostream>
using namespace std;
class test
{
private:
    int x, y;

public:
    void accept(int a, int m)
    {
        x = a;
        y = m;
    }
    void display()
    {
        cout << "After dividing value of x is :" << x<<endl;
        cout << "After dividing value of y is :" << y;
    }
    test operator/(test ok)
    {
        test temp;

        temp.x = ok.x / x;
        temp.y = ok.y / y;

        return (temp);
    }
};
int main()
{
    test obj1, obj2, obj3;
    obj1.accept(90, 80);
    obj2.accept(9, 4);
    // obj3 =obj2.add(obj1);
    obj3 = obj2 / obj1;
    obj3.display();
}