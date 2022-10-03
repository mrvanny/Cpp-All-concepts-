#include<iostream>
using namespace std;

class Example
{
    int a,b;
    public:
    Example(int k,int p )
    {
        a=k;
        b=p;
    }
    void isgreater();
    friend void swap(Example);
};
void Example::isgreater()
{
    a > b ?  cout<<a : cout<<b ;

}
 void swap(Example n)
 {
    int temp=n.a;
    n.a=n.b;
    n.b=temp;
    cout<<"After swapping :"<<n.a<<" "<<n.b;
 }

 int main()
 {
    Example obj(10,30);
    obj.isgreater();
    swap(obj);


 }