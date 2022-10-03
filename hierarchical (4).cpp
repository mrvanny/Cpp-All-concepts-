#include<iostream>
using namespace std;
class number
{
    protected:
    int x;
    
    public:
    void accept(int p)
    {
        x=p;
    }
};
class Test:public number
{
public:
    void fact()
    {
        int f=1;
        for (int i=1;i<x;i++)
        {
            f=f*i;
        }
        cout<<"Factorial is :"<<f<<endl;
    }
};
class Test2:public number
{
        int tb;
        public:
        void arms()
        {
            if(f%2==0)
            {
                cout<<"Even NUmber"<<endl;
            }
            else
            {
                cout<<"Odd number"<<endl;
            }
        }
};
int main()
{
    Test obj;
    Test2 obj2;
    obj.accept(10);
    obj.fact();
    obj2.accept(8);
    obj2.arms();
}