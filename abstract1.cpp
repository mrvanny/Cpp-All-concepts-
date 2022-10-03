#include<iostream>
using namespace std;
//to make a function compulsory for  all derived classes
class Test
{
   public:
           virtual void accept()=0; //syntax for abstrcat 
};
class Factorial:public Test
{
    private:
             int n;
    public:
            void accept()
            {
                cout<<"Enter Value of n for factorial\n";
                cin>>n;
            }
            void operation();
};
void Factorial::operation()
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    cout<<"Factorrial is "<<fact<<endl;
}
class Prime:public Test
{
    private:
             int x;
    public:
            void accept()
            {
                cout<<"Enter Value of n for prime \n";
                cin>>x;
            }
            void operation();
};
void Prime::operation()
{
    int count = 0;
    for(int i=1;i<=x;i++)
    {
        if(x%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        cout<<"Given Number Is Prime\n";
    }
    else
    {
        cout<<"Given Number Is Not Prime\n";
    }
}

int main()
{
   Factorial obj1,*p;
   Prime obj2;
    p=&obj2;

    obj1->accept();
    obj1->operation();

//    obj1.accept();
//    obj1.operation();

//    obj2.accept();
//    obj2.operation();

   return 0;

}