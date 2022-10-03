#include<iostream>
using namespace std;

class Parent 
{
    protected:
    int l,b,s;
    public:
    void accept(int a,int k,int c)
    {
        l=a;
        b=k;
        s=c;
    }
};
class Child1:public Parent
{
    private:
    int r,ans;
    public:
    Child1(int k)
    {
        r=k;
    }
    void area()
    {
        ans=3.14*r*r;
        cout<<"Area of circle is:"<<ans<<endl;

    }

};
class Child2:public Parent
{
    private:
    int r,ans;
    public:
    void areasquare(int k)
        {
            r=k;
            ans=r*r;


            cout<<"The area of Square is:"<<ans<<endl;


        }
        void rect()
        {
            int ans;
            ans=l*b;
            cout<<"Area fo rectangle is:"<<ans<<endl;
            


        }
};

int main()
{
    Child1 obj(8);
    obj.area();

    Child2 obj2;
    obj2.accept(2,3,8);
    obj2.areasquare(4);
    obj2.rect();
}
