#include<iostream>
using namespace std;

class Example
{
    int f,x,y,b1,b2,b3;

    public:
    
        void operation(int);
        void operation(int,int);
        void operation(int,int,int);
    
};
void Example::operation(int x)
{
    int fact=1;
    for (int i = 1; i < x; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial is :"<<fact<<endl;
}
void Example::operation(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    cout<<"After swapping: \t"<<x<<y<<endl;
}
void Example::operation(int x,int y,int z)
{
    if(x>y && x>z)
    {
        cout<<"Biggest is:"<<x<<endl;
    }
    else
    {
        if (y>z)
        {
            cout<<"Biggest is:"<<y<<endl;
        }
        else
        {
            cout<<"Biggest is "<<z;
        }
        
    }


}

int main()
{
    int k,l,m;
    Example obj;
    
    cout<<"Enter value for finding Factorial"<<endl;
    cin>>k;
    obj.operation(k);

    cout<<"Enter two numbers for swapping:"<<endl;
    cin>>l>>m;
    obj.operation(l,m);

    cout<<"Enter 3 Numbers: "<<endl;
    cin>>k>>l>>m;
    obj.operation(k,l,m);

    return 0;
}

