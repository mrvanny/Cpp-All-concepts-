#include<iostream>

using namespace std;
class parent
{
    protected:
    int x;
    public:
    void accept()
    {
        cout<<"Enter one number";
        cin>>""
    }

};
class child:public parent
{
    private
    int x;
}