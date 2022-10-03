#include<iostream>
using namespace std;

class Demo
{
    private:
            int l,b,r;
    public:
             Demo(int x)
             {
                 r=x;
             }
             void accept(int,int);
             void circumference();
             void areaTriangle();        
};

void Demo::accept(int i,int j)
{
    l=i;
    b=j;
}
void Demo::circumference()
{
    float circum = 2*3.14f*r;
    cout<<"Circumference is"<<circum<<endl;
}
void Demo::areaTriangle()
{
    float area = 0.5f*l*b;
    cout<<"Area of triangle is"<<area<<endl; 
}
int main()
{
    int n,p,q;
    cout<<"Enter Radius\t";
    cin>>n; 
    cout<<"Enter two values\t";
    cin>>p>>q;

    Demo obj(n);
    obj.accept(p,q);
    obj.areaTriangle();
    obj.circumference();
    return 0;
}