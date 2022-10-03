#include<iostream>
using namespace std;

class Integer
{
    protected:
    int x;

    public:
    
    void accept(int k)
    {
        x=k;

    }

};
class fact:public Integer
{
    protected:
    int f;
    public:

    void factorial()
    {
            int f=1;

        for(int i=1;i<=x;i++)
        {
        f=f*i;
        }
        cout<<"Factorial is : "<<f<<endl;
    }


};
class arm:public fact
{
    public:
    arm()
    {
        accept(5);
        factorial();
        armstrong();
        
    }
    void armstrong()
    { 
        int sum,r,k;
        k=f;

        while(f>0)
        {
        
            r=f%10;
            sum=sum+(r*r*r);
            f=f/10;
        
        }
        if(k==sum)
        {
            cout<<"Armstrong Number"<<endl;
        }
        else
        {
            cout<<"Not armstrong number"<<endl;
        }
        

    }
};
int main()
{
    arm ob;
}