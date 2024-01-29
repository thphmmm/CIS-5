/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 10, 2019, 12:28 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    float payRate,//Pay rate in $'s/hour
    hrsWrkd,//Hours Worked
    grssPay;//Gross pay in $'s 
    
    //Initialize or input i.e. set variable values
    cin>>payRate>>hrsWrkd;
    
    //Map inputs -> outputs
    grssPay  = payRate*hrsWrkd;//Straight time
    grssPay += (hrsWrkd>40) ? payRate*(hrsWrkd-40) : 0;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
cout<<"This program calculates the gross paycheck."<<endl;
cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
cout<<"Paycheck = $"<<setw(7)<<grssPay;

    //Exit stage right or left!
    return 0;
}