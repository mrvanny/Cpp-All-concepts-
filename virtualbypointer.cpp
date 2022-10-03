#include<iostream>

using namespace std;

class Integer
{
    public:
    virtual void getRadius()=0; //of of this function is compolsory in every inherited classes 
};
class Area:public Integer
{
    int n;
    public:
    void getRadius()
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
class Circum:public Integer
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
       cout<<"Area of circle is :"<<l<<endl;

    }


};
int main()
{
    Area *ptr;
    Circum obj;

    ptr = &obj;

    ptr->getRadius();
    ptr->operation();



}