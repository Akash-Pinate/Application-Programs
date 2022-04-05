#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;

        void fun(int i)
        {
            x=i;
            cout<<"Demo of x: "<<x<<endl;
        }
};

class Derived :public Demo
{
    public:
        int p;

        void gun(int j)
        {
           p=j;
           cout<<"derived of p: "<<p<<endl;
        }
};

int main()
{
    Demo obj;
    Derived dobj;
    
    Demo* ptr=NULL;
    ptr=&dobj;     //upcasting 

    ptr->fun(12);
    delete(ptr);

    Derived* dptr=NULL;
    dptr=&obj;              //downcasting is invalid 

   // ptr->gun(21);
    

}
