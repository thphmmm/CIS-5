/* 
 * Author: Thu Pham
 * Created on January 27,2024 12:02 AM
 * Purpose:  Calculate the factorial using a function
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    int fctrl=1;
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>num;
    
    //Process/Map inputs to outputs
    if(num<0) {
      cout<<"Invalid input"<<endl;
        return 1; // Indicate error
    }
    
    for(int i=1; i<=num; ++i) {
        fctrl *= i;
    }

    //Output data
    cout<<num<<"! = "<<fctrl;
    
    //Exit stage right!
    return 0;
}