#include<iostream>
using namespace std;

class Number
{
    protected:
    int x,y;

    public:
    void accept(int a,int b)
    {   x=a;
        y=b;
    }
};
class Test:public Number
{
    protected:
    int f=1;
    float ans;

    public:
    void factorial()
    {
        for(int i=1;i<=x;i++)
        {
            f=f*i;
        }

    }
    void areaCircle()
    {
        ans=3.14*x*x;
    }

};
class Test2:public Number
{
    protected:
    int s;
    float c;
    public:
    void sumn()
    {
        for(int i=0;i<=y;i++)
        {
            s=s+i;
        }
        cout<<"Sum of N :"<<s<<endl;

    }
    void circum()
    {
        c=2*3.14*y;
        cout<<"Circumference :"<<c<<endl;

    }

};

class Result:public Test
{   public:
    void show()
    {
        factorial();
        cout<<"Factorial is "<<f<<endl;

        areaCircle();
       cout<<"Area :"<<ans<<endl;
    }
};

int main()
{
    Test2 obj2;

    obj2.accept(8,2);
    obj2.sumn();
    obj2.circum();

    Result obj;

    obj.accept(5,6);
    obj.show();



return 0;
}