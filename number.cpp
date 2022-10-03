#include<iostream>
 using namespace std;

class area
{
    int x;
public:

      area()
    { cout<<"Enter a area";
      cin>>x;

    }
     void isEven();
     void ispos();

};
void area::isEven()
{
    if(x%2==0)
    {
        cout<<"The given area is even"<<endl;
    }
    else
    {
        cout<<"The given area is odd"<<endl;
    }
}
void area::ispos()
{
    if (x>=0)
    {
        cout<<"The given area is positive"<<endl;
    }
    else
    {
        cout<<"The given area is negative";
    }
}

int main()
{
area obj;
obj.isEven();
obj.ispos();

}
