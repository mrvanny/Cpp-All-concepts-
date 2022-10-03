#include<iostream>
using namespace std;

class Test
{
    private:
    int x,y;
    public:
    
    void accept(int a, int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"Value of X:"<<x<<endl;
        cout<<"Value of Y:"<<y<<endl;
    }
    Test operator-()
    {
        Test temp;
        temp.x=-x;
        temp.y=-y;

        return temp;
    }

};
int main()
{
    Test obj1,obj2;
    obj1.accept(10,30);
    obj2= -obj1;
    obj2.show();
    return 0;



}
