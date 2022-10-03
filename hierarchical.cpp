#include<iostream>
using namespace std;
class Number
{
    protected:
    int  temp,sum,r,x;
    public:
    void accept(int k)
    {
        x=k;
        temp=x;
    }

};
class arm:public Number
{
    public:
    void arms()
    {
    while(x>0)
    {
        r=x%10;
        sum=sum+(r*r*r);
        x=x/10;
    }
    if(temp==sum)
    {
        cout<<"It Is Armmstrong Number:"<<endl;
        
    }
    else
    {
        cout<<"It Is not Armmstrong Number:"<<endl;
    }
    
    }
    
};
class Pal:public Number
{
    public:
    void palind()
    {
    while(x>0)
    {
        r=x%10;
        sum=sum*10+r;
        x=x/10;
    }
    
    if(temp==sum)
    {
        cout<<"It Is Palindrome Number:"<<endl;
        
    }
    else
    {
        cout<<"It Is not palindrome Number:"<<endl;
    }
    
    
    }
};
int main()
{
    arm obj;
    obj.accept(153);
    obj.arms();
    
    Pal obj2;
    obj2.accept(2112);
    obj2.palind();
    
    
      
   
}
    
    
    