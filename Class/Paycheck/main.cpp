/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 9, 2024, 11:48 PM
 * Purpose: Paycheck
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>  //Random Function
#include <ctime>    //Time Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    //srand(static_cast<unsigned int>(time(0)));
    unsigned int usiNow=time(0);
    srand(usiNow);
    
    //Declare all variables
    float payDay1,//Pay in $'s at the end of the day
          payDay2,//Pay in $'s at the end of the day
          payRate,//Pay rate in $'s hour
          ovrTim,//Over time starts when? hours
          hrsWrkd;//Hours worked in hours
    
    //Initialize all variables
    hrsWrkd=rand()%17;//[0,16]
    payRate=1.5e1f;//$15/hr
    ovrTim=8;//Over time starts when hrsWrkd > 8
    
    //Process or Map solutions
    payDay1 = hrsWrkd<=ovrTim?
              payRate*hrsWrkd:
              payRate*ovrTim + 1.5*payRate*(hrsWrkd-ovrTim);
    
    payDay2 = payRate*hrsWrkd;//Straight time pay
    payDay2+= hrsWrkd>=ovrTim?
              0.5*payRate*(hrsWrkd-ovrTim):0;
              
    //Display the output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"For "<<hrsWrkd<<" hours worked our Payday = $"<<payDay1<<endl;
    cout<<"For "<<hrsWrkd<<" hours worked our Payday = $"<<payDay2<<endl;
    
    //Exit the Program
    return 0;
}

