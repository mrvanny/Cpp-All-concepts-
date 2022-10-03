
#include<iostream>
using namespace std;
class Test2;
class Test1
{
private:
         int x;

public:
        void accept(int i)
        {
           x=i;
        }
         friend void sum(Test1,Test2);

};

class Test2
{
private:
         int y;

public:
        void accept(int j)
        {
           y=j;
        }
         friend void sum(Test1,Test2);

};

void sum(Test1 o1,Test2 o2)
{
    cout<<"sum is"<<o1.x + o2.y;
}

int main()
{
    int x,y;
    Test1 obj1;
    Test2 obj2;

    cout<<"Enter value for X";
    cin>>x;
    cout<<"Enter value for Y";
    cin>>y;
    
    obj1.accept(x);
    obj2.accept(y);
    sum(obj1,obj2); 

}




