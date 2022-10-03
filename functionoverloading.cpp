#include<iostream>
using namespace std;

class Find
{
    int r,l,bd;
    float s,b,h;

    public:
    void area(int);
    void area(float);
    void area(int,int);
    void area(float,float);
};
void Find::area(int r)
{

    int ans;
    ans=2*3.14*r;
    cout<<"Area of circle is :"<<ans<<endl;

}
void Find::area(float s)
{
    float ans;
    ans=s*s;
    cout<<"Area of Square is :"<<ans<<endl;

}
void Find::area(int l,int bd)
{
    int ans;
    ans=l*bd;
    cout<<"Area of Square is :"<<ans<<endl;

}
void Find::area(float b,float h)
{
    float ans;
    ans=0.5*b*h;
    cout<<"Area of Square is :"<<ans<<endl;

}
int main()
{ 
    Find obj;
    int rad;
    cout<<"Enter Radius of circle:"<<endl;
    cin>>rad;
    obj.area(rad);

    float sid;
    cout<<"Enter side of square :"<<endl;
    cin>>sid;
    obj.area(sid);

    int le,br;
    cout<<"Enter Length and breadth :"<<endl;
    cin>>le>>br;
    obj.area(le,br);

    int bred,hei;
    cout<<"Enter Breadth and height of Triangle :"<<endl;
    cin>>bred>>hei;
    obj.area(bred,hei);

return 0;
}



