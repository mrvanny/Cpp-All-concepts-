#include<iostream>
using namespace std;

class Demo
{
    private:
    int x;
    public:
    void accept();
    void factorial();
    friend void table(Demo);
};
 void Demo::accept()
 {
    cout<<"Enter value ";
    cin>>x;
 }
 void Demo::factorial()
 {
    int fact=1;
    for (int i = 1; i <=x ; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial is:"<<fact<<endl;
 }
 void table(Demo n)
 {

    for (int i = 1; i <=10; i++)
    {
        int ans= n.x*i;
        cout<<ans<<endl;
    }
    
 }
 int main()
 {
    Demo obj1,obj2;
    obj1.accept();
    obj1.factorial();
    table(obj1);

    return 0;
 }
