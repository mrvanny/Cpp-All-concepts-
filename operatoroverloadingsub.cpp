
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
        cout << "After substraction value of x is :" << x<<endl;
        cout << "After substraction value of y is :" << y;
    }
    test operator-(test ok)
    {
        test temp;

        temp.x = ok.x - x;
        temp.y = ok.y - y;

        return (temp);
    }
};
int main()
{
    test obj1, obj2, obj3;
    obj1.accept(2, 9);
    obj2.accept(94, 34);
    obj3.accept(1,22);
    // obj3 =obj2.sub(obj1);
    obj3 = obj1-obj3;
    obj3.display();
}