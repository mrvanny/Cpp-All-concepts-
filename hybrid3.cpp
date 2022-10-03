#include<iostream>
using namespace std;
class Student
{
    protected:
    int h1,s1,m1,h2,s2,m2;
    public:
    void satish(int,int,int);
    void manish(int,int,int);
};
void Student::satish(int a,int b,int k)
{
    h1=a;
    s1=b;
    m1=k;
    //cout<<h1<<" "<<s1<<" "<<m1<<endl;
}
void Student::manish(int a,int b,int c)
{
    h2=a;
    s2=b;
    m2=c;
    //cout<<h2<<" "<<s2<<" "<<m2<<endl;

}

class Mresult:public Student
{
    protected:
    int ans;
    float p;
    public:
    void isPass()
    {
    ans=m2+s2+h2;
    cout<<"Marks Of manish:"<<ans<<endl;
    p=(ans*100)/300;
    cout<<"Manish Got "<<p<<" percentages"<<endl;
    }
    
};
class Sresult:public Student
{
    protected:
    int ans;
    float p2;
    public:
    void isps();
};
void Sresult::isps()
{
    ans=m1+s1+h1;
    cout<<"Satish marks:"<<ans<<endl;

    p2=(ans*100)/300;
    cout<<"Satish Got "<<p2<<" percentages"<<endl;

}
class Rank:public Sresult, public Mresult
{
    public:
    void First()

    {
        if(p>p2)
        {
            cout<<"Manish is First Rank Holder"<<endl;
        }
        else
        {
            cout<<"Satish is First Rank holder"<<endl;
        }
    }
};
int main()
{
    Sresult obj;
    Mresult obj2;
    Rank ob;
    obj.satish(52,61,91);
    obj.isps();
    
    obj2.manish(30,70,99);
    obj2.isPass();
    ob.First();
    
}
