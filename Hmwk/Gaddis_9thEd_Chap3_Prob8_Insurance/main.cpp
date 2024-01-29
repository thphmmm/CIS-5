/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 11, 2024, 6:23 PM
 * Purpose: Calculate Insurance for Property
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> //Format Library

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const float insurP=0.8; //Insurance percentage
    
    float replaceC, //Replacement cost for building
          insurC;  //Insurance cost for property
    
    //Initialize or input i.e. set variable values
    cin>>replaceC;
    
    //Map inputs -> outputs
 insurC=replaceC*insurP;
 
    //Display the outputs
cout<<"Insurance Calculator"<<endl;
cout<<"How much is your house worth?"<<endl;
cout<<"You need $"<<insurC<<" of insurance.";
    //Exit stage right or left!
    return 0;
}