#include<iostream>
using namespace std;

class Dec
{
    private:
    int v;
                //operator overloading
    public:

    void accept(int k)
    {
        v=k;
    }
    void display()
    {
        cout<<"Value of V is:"<<v<<endl;
    }
    Dec operator--()
    {
        Dec temp;
        temp.v=--v;
        return temp;
    }
    Dec operator--(int)
    {
        Dec temp;
        temp.v=v--;
        return temp;

    }

};
int main()
{
    int n;
    Dec obj1,obj2;
    cout<<"Enter one value:";
    cin>>n;
    obj1.accept(n);

    cout<<"Pre Decreament:"<<endl;
    obj2=--obj1;

    obj1.display();
    obj2.display();

    cout<<"Post Decreament:"<<endl;
    obj2=obj1--;
    
    obj1.accept(n);
    obj1.display();
    obj2.display();

}