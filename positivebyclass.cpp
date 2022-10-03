#include<iostream>
using namespace std;
class Example
{
   private:
             int a,b;
   public:
            void accept()
            {
                cout<<"Enter a area"<<endl;
                cin>>a;
            }       
             void display()
            {
                if(a%2==0)
                {
                    cout<<"A is Even area";
                }
                else{
                    cout<<"A is odd area";
                }
            }  
};

int main()
{
    Example obj;
   obj.accept();
    obj.display();

}