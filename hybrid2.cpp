#include<iostream>
using namespace std;

class Integer
{
    protected:
    int x,y;
    public:
    void getdata(int,int);
    void putdata();
};
void Integer::getdata(int k, int l)
{
    x=k;
    y=l;
}
void Integer::putdata()
{
cout<<"Value OF X:"<<x<<endl;
cout<<"Value Of Y"<<y<<endl;
}
class Swap:public Integer
{   private:
    int t;
    public:
    void swapping();
   
};
void Swap::swapping()
{
    t=x;
    x=y;
    y=t;
    cout<<"Afte swapping value of X:"<<x<<endl;
    cout<<"Afte swapping value of Y:"<<y<<endl;
    
}

class operation:public Integer
{
    protected:
    int f=1;
    public:
    void factorial()
    {
        for(int i=1;i<=x;i++)
        {
            f=f*i;
        }

    }

};
class Result:public operation
{
    public:
    void display()
    {
    cout<<"Factorial is :"<<f<<endl;

    }

};

int main()
{
    Swap obj;
    obj.getdata(5,9);
    obj.putdata();
    obj.swapping();

    Result obj2;
    obj2.getdata(5,9);
    obj2.factorial();
    obj2.display();

    return 0;

}
