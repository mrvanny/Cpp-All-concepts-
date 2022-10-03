#include<iostream>
using namespace std;
class Integer
{
    protected:
    int x,y;
    public:
    void getdata(int k,int l)
    {
        x=k;
        y=l;
    }
};
class Operation:public Integer
{
    protected:
    int ans;
    public:
    void rec()
    {
        ans=x*y;
        cout<<"Area of rectangle is:"<<ans<<endl;
    }
};
class Area:public Operation
{
    protected:
    float ans;
    public:
    void tri()
    {
        ans=0.5*x*y;
        cout<<"Area of Triangle is :"<<ans<<endl;
    }
};
class Operation2:public Integer
{
    protected:
    int t;
    public:
    void swap()
    {
        t=x;
        x=y;
        y=t;
        cout<<"After swapping value of X:"<<x<<endl;
        cout<<"After swapping value of Y:"<<y<<endl;
    }
    void isGreater()
    {
        if(x>y)
        {
            cout<<"X is greater"<<endl;
        }
        else
        {
              cout<<"Y is greater"<<endl;

        }
    }

};
int main()
{
    Area obj;
    Operation2 obj2;

    obj.getdata(3,8);
    obj.rec();
    obj.tri();

    obj2.getdata(7,9);
    obj2.swap();
    obj2.isGreater();

}


