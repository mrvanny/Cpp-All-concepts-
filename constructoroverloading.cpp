#include<iostream>
using namespace std;

class area
{
private:
    int r,l,b,s;

public:
    area()
{
cout<<"Enter Radius of circle"<<endl;
cin>>r;
}  
 area(int i, int j)
 {
     l=i;
     b=j;
 
 }
    area(int j)
 {
    s=j;
 }
  void circle();
  void rectangle(int ,int);
  void square(int );

};

void area::circle()
{
    float ans=3.14*r*r;

    cout<<"Area of circle is "<<ans<<endl;
    
}
 void area::rectangle(int l,int b)
 {
     int ans=l*b;
     cout<<"The area of rectangle is "<<ans<<endl;

 }
 void area::square(int s)
 {
     int ans=s*s;
cout<<"The area of Square is "<<ans<<endl;

 }

 int main()
{ area obj;
obj.circle();

obj.rectangle(21,4);

obj.square(5);


return 0;


 }

 