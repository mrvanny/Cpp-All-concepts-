#include<iostream>
using namespace std;

class Pre
{
    private:
            int a;
    public:

    void accept(int k)
    {
        a=k;
    }
    void display()
    {
        cout<<"Value of A is :"<<a<<endl;
    }
    Pre operator++(int)
    {
        Pre temp;
        temp.a= a++ ;
        return temp;
    }


};
int main()
{
    int n;
    Pre obj1,obj2;
    cout<<"Enter one value";
    cin>>n;
    obj1.accept(n);
    obj2=obj1++;
    obj1.display();
    obj2.display();
    return 0;
}