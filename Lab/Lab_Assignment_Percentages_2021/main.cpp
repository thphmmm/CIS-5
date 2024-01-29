/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 11, 2024, 11:02 PM
 * Purpose: Calculate Military Budget
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
    float milBdgt,//Military Budget
          fedBdgt,//Federal Budget
          milPer;//Military budget as a percentage of the federal budget
    
    //Initialize or input i.e. set variable values
          milBdgt= 7.0e11f,//In 700 billion $'s
          fedBdgt=4.1e12f;//In 4.1 trillion $'s
    
    //Map inputs -> outputs
          milPer=milBdgt/fedBdgt*100;

    //Display the outputs
        cout<<fixed<<setprecision(1)<<showpoint;
        cout<<"Military Budget Percentage : "<<milPer<<" %"<<endl;
          
    //Exit stage right or left!
    return 0;
}