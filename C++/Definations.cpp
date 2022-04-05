/* THE FOLLOWING PROGRAM WILL ILLUSTRATES :
            DEFINATION ,OVERLOADED DEFINATION AND  RE-DEFINATION 
*/

/*
      DEFINATION-> When we define any method in a class for first time 
      
      
      OVERLOADED DEFINATIONS-> If we define more than one function in same name and
                               different prototype
                               

      RE-DEFINATION -> if a base class contains one method and if derived class contain 
                       same method with same and different prototype

*/

#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        
        //Defination
        void fun()
        {
            cout<<"inside fun: "<<endl;
        }

        void gun()
        {
            cout<<"inside gun: "<<endl;
        }
        
        //Overloaded Defination
        void fun(int a)
        {
            i=a;
            cout<<"parameterised fun: "<<endl;
        }
};

class Hello: public Demo
{
    public:
        int x,y;
         
        //Re-Defination
        void fun(int a)
        {
            cout<<"inside hello"<<endl;
        }
};

int main()
{
  
  return 0;
}
