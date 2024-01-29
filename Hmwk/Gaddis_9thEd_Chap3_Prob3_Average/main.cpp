/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 11, 2019, 8:43 PM
 * Purpose:  Calculate the New Compensation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
   int payInR = .076,// Pay increase ratio
        anlSal,//Annual (yearly) salary
          mthSal,//Monthly salary
          NanlSal,//New annual salary
          NmthSal,//New montly salary
          rtPatm,//Retroactive pay amount
     mthIn = 6;//# of month increased
    
    //Initialize or input i.e. set variable values
    mthSal = anlSal/12,
    NmthSal= payInR*mthSal + mthSal,
    NanlSal= NmthSal*12,
    rtPatm = NmthSal*6;
    
    //Map inputs -> outputs
    
    
    //Display the outputs
cout<<"Input previous annual salary."<<endl;
cin>>anlSal;
cout>>"Retroactive pay    = $  "<<rtPatm<<endl;
cout<<"New annul salary  = $"<<NanlSal<<endl;
cout<<"New monthly salary = $ "<<NmthSal;

    //Exit stage right or left!
    return 0;
}