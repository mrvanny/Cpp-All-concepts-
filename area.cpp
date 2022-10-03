#include<iostream>

using namespace std;

class demo
{
     private:
              int cir,l,b;
      public:
    demo(int a)
    {
        cir=a;
    }
     demo(int k,int p)
     {
        l=k;
        b=p;
    }
    void circumference();
    void triangle(int,int);

};

void demo::circumference()
{
    float ans;
    ans=2*3.14*cir*cir;
cout<<"The circumference of circle is "<<ans<<endl;

}

void demo::triangle(int l,int b)
{
    float anss=0.5*l*b;
    cout<<"The area of triangle is :"<<anss;
}
int main()
{
int r,le,be;
    cout<<"Enter radius of circle"<<endl;
    cin>>r;
    
    demo obj(r);
    obj.circumference();
    cout<<"Enter length and breadth of triangle "<<endl;
    cin>>le>>be;
    obj.triangle(le,be);

return 0;
}



