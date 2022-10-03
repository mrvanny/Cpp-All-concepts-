#include<iostream>
using namespace std;

class number
{
private:
        int  n,a,b;

public:
        number()
         {
         cout<<"Enter a value";
         cin>>n;
         }
        number(int i, int j)
        {
         a=i;
         b=j;
        }
    void table();
    void swap();

};

void number::table()
{
    int ans; 
    for ( int i = 1; i <=10; i++)
    {
           ans=i*n;
          cout<<ans<<endl;
    }   
}
void number::swap()
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swapping :"<<a <<" " << b ; 
}

int main()
{ 
    int k,p;

   number obj;
   obj.table();

  cout<<"Enter 2 values for swapping";
  cin>>k>>p;

  number obj2(k,p);
  obj2.swap();
  
  return 0;
}

