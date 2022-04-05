/* THE FOLLOWING PROGRAM WILL ILLUSTRATES :
            TO CREATE DEMO AND DERIVED OBJECT AND ALL POSSIBILITIES... 

*/

/*       
       Upcasting     ->  Base class pointer points to Derived class object.    //50rs points to 10rs. 
       Downcasting   ->  Derived class pointer point to Base class object.     //10rs points to 50rs

       Downcasting is directly NOT ALLOWED by the compiler...
*/

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
/*
            The Pragram includes total 4 posobilities :
                : Base class pointer point to Base class object.              //VALID
                : Derived class pointer point to Derived class object.        //VALID
                : Base class pointer point to Derived class object.           //VALID
                : Derived class pointer point to Base class object.           //NOT VALID

*/

    Demo obj;             //Demo class object created 
    Derived dobj;         //Derived clss object created 

    
      //    --- #1 --- : Base class pointer point to Base class object.

         Demo*ptr=NULL;          
         ptr=&obj;

        ptr->fun(11);

  

      //    --- #2 --- : Derived class pointer point to Derived class object

         Derived* ptr=NULL;
         ptr=&dobj;

         ptr->gun(21);




      // --- #3 --- : Base class pointer point to Derived class object.

        Demo* ptr=NULL;
        ptr=&dobj;             //upcasting 

        ptr->fun(21);
  

  
     /*   --- #4 ---  INVALID   : Derived class pointer point to Base class object.

        //Derived* dptr=NULL;
       //dptr=&obj;              //downcasting is invalid 
  
       // ptr->gun(21);
    
*/

    return 0;
}
                  // UPCASTING concept is used in VIRTUAL /PURE VITRTUAL  FUNCTION ...
