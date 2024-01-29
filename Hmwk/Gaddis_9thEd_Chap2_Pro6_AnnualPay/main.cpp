/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 5, 2024, 2:11 PM
 * Purpose: Find the Annual Pay In A Year
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
unsigned short  payAmo, payPer, anlPay;
    
//Initialize all variables
payAmo= 2200,
payPer= 26,
anlPay;

//Process or Map solutions
anlPay= payAmo*payPer;

//Display the output
cout<<"Annual pay in a year = $"<<anlPay<<endl;    

//Exit the Program
    return 0;
}

