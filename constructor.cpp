#include<iostream>
using namespace std;

class Circle
{
    protected:
        int r,ans;
    public:
    Circle(int k)
    {
        r=k;
        areaSquare();
    }
    void areaSquare()
    {
        ans=3.14*r*r;
        cout<<"Area Of circl:"<<ans<<endl;
    }

};
class Square//:public Circle
{
    protected:
    int s;
    public:
    Square(int k,int m)//:Circle(m)
    {
            s=k;
            areaSquare();
    }
    void areaSquare()
    {
        cout<<"Area Of square is:"<<s*s<<endl;
    }
};
class Rectangle:public Square,public Circle
{
    protected:
    int l,b;
    public:
    Rectangle(int k,int m):Square(k,m),Circle(m)
    {
        l=k;
        b=m;
        area();
    }
    void area()
    {
        cout<<"Area of Rectangle is :"<<l*b<<endl;
    }

};
int main()
{
    Rectangle obj(4,8);

return 0;
}
