#include<iostream>
using namespace std;
class Example
{
   private:
            static int a,b;
   public:
            static void accept()
            {
                cout<<"enter two areas";
                cin>>a>>b;
            }       
            static void display()
            {
                if(a>b)
                {
                    cout<<"A is greater";
                }
                else{
                    cout<<"b is gretater";
                }
            }  
};
 int Example::a;
 int Example::b;

int main()
{
    Example::accept();
    Example::display();

    // return 0;    
}