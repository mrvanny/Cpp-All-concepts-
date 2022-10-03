#include<iostream>

using namespace std;

class Area
{
    int n;
    public:
     
     virtual void getRadius()
    {
        cout<<"Enter Radius For Area"<<endl;
        cin>>n;
    }
     void operation()
    {
       int a;
       a=3.14*n*n;
       cout<<"Area of circle is :"<<a<<endl;

    }

};
class Circum:public Area
{
    int k;
    public:
        void getRadius()
    {
        cout<<"Enter Radius For Circum"<<endl;
        cin>>k;
    }
     void operation()
    {
       int l;
       l=2*3.14*k;
       cout<<"Circumference  of circle is :"<<l<<endl;

    }


};
int main()
{
    Area *obj;
    
    Circum k;

    obj=&k;
    obj->getRadius();
    obj->operation();


}