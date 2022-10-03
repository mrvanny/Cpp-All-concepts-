#include<iostream>
#include<string.h>
#define MAX 100

using namespace std;
class Example
{
   private:
            
      char str[MAX];

   public:
            void accept()
            {
                cout<<"Enter a string"<<endl;
                gets(str);
            }       
             void displayreverse()
            {
              puts(strrev(str));
            }  
        
            
};

int main()
{
    int i=0;
    char vnew[MAX];
    Example obj;
    obj.accept();
    obj.displayreverse();
                

}