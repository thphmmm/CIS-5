/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 15, 2024, 3:16 PM
 * Purpose:  Internet Bill
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
char package;
    int hours;
    float A = 9.95,
          B = 14.95,
          C = 19.95,
          addratA = 2.00,
          addratB = 1.00;
    const int maxHrs = 744;
    
    //Initialize or input i.e. set variable values
cout<<"ISP Bill"<<endl;
cout<<"Input Package and Hours"<<endl;
cin>>package>>hours;

    //Map inputs -> outputs
float totAmt;
     if (package == 'A') {
        totAmt = A + (hours > 10 ? addratA * (hours - 10) : 0);
    } else if (package == 'B') {
        totAmt = B + (hours > 20 ? addratB * (hours - 20) : 0);
    } else if (package == 'C') {
        totAmt = C;
    }
    
    //Display the outputs

cout<<"Bill = $ "<<totAmt;

    //Exit stage right or left!
    return 0;
}