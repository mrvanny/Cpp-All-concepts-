#include<iostream>
using namespace std;

class test
{
    private:
          int p,q,r,s;

    public:
    
         test()
         {
             cout<<"Enter a value ";
             cin>>p;
         }
         test(int a)
         {
             q=a;
         }
         void accept(int ,int);
         void isEven();
         void isPos();
         void isGreater();
};
void test::accept(int k, int m)
{
    r=k;
    s=m;
}

void test::isEven()
{
    if(p%2==0)
    {
        cout<<"Even number"<<endl;
    }
    else
    {
        cout<<"Odd number"<<endl;
    }
}

void test::isPos()
{
    if (q>=0)
    {
        cout<<"The number is positive"<<endl;
    }
    else
    {
        cout<<"Negative number"<<endl;
    }   
}
void test ::isGreater()
{
    if(r>s)
    {
       cout<<"Greater is :"<<r<<endl;
    }
    else
    {
        cout<<"Greater is :"<<s<<endl;
    }
    
}

int main()
{
    
     test obj;
    obj.isEven();

     test obj2(-2);
     obj2.isPos();

     obj.accept(10,20);
     obj.isGreater();

     

     return 0;
}