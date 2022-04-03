/*
	THIS PROGRAM ILLUSTRATES THE USE OF : 
		DEFINING 'constant data-member' in the class...
*/
#include<iostream>

using namespace std;

class demo
{
	public:
		const int i;
	/*
		// 	Constant members must be initialised
	        //      otherwise compiler generate error.
                //      but whenever we create the the object of the class theire no memmory allocation   i.e -> const int i=10    //Error 
		
		demo()
		{
		
		}
	*/

	/*
		// 	We can not initialise constant members 
		// 		inside the constuctor
		
		demo()
		{
			i = 10;	//Error
		}
	*/

		// 	CORRECT WAY TO DEFINE constant members...
    	        // 		To initialise the constant members we have to use the member initialisation list concept
                //    To initialize the constant members before control goes inside the the constructor we have to intialize the constant members 

		demo():i(10)		// THIS IS concept of 'initialisation list'...
		{
			cout<<"Successfully initialised the constant members..."<<endl;
		}
	
	        
	        //    We can initialize the Dynamically constant data members 
	        
	        Demo  (int a):i(a)
                {
                        cout<<"Successfully initialised  the Dynamic constant members"<<endl;
                }
};

int main()
{
	demo dobj;

	// We can not change value of constant member...
	// dobj.i++;		// NOT ALLOWED...
        
	demo obj(21);    //   Dynamically created 
	return 0;
}


//constant members is also known as READ-ONLY variable/member 
