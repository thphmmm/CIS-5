/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 5, 2024, 2:43 PM
 * Purpose: Find the Total Amount of Purchase Including Sales Tax
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    
//Declare all variables

//Initialize all variables
float  a= 15.95,
       b= 24.95,
       c= 6.95,
       d= 12.95,
       e= 3.95,
       Tax= .07,
        
//Process or Map solutions
SubTot=a+b+c+d+e,
SaleTx=SubTot*Tax,
Total=SubTot+SaleTx;

//Display the output
cout<<"Subtotal = $"<<SubTot<<endl;
cout<<"Sales Tax = $"<<setprecision(3)<<SaleTx<<endl;
cout<<"Total = $"<<setprecision(4)<<Total<<endl;

//Exit the Program
    return 0;
}

