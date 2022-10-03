#include<iostream>
using namespace std;

class Number
{
    protected:
    int r;
    public:
        void getradius(int);
        void printradius();
};
void Number::getradius(int k)
{
    r=k;
}
void Number::printradius()
{
    cout<<"Radius :"<<r<<endl;

}

class Circle:public Number
{
    protected:
    float ans;
    public:
    void areacircle();
};
void Circle::areacircle()
{
    ans=3.14*r*r;
    cout<<"Area Of circle:"<<ans;
}

class Square
{
    protected:
    int s,ans;
    public:
    void getside(int);
    void areaSquare();  
};
void Square::getside(int k)
{
    s=k;
}
void Square::areaSquare()
{
    ans=s*s;
    cout<<"Area OF square:"<<ans<<endl;

}
class area:public Circle, public Square
{
    public:

    void show()
    {
        areacircle();
    areaSquare();
    printradius();
    }
};



int main()
{
    area obj;
    obj.getradius(4);
    obj.getside(9);
    obj.show();
    return 0;
}
