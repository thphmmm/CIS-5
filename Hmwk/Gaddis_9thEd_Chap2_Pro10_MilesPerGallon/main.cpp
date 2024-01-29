/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 5, 2024, 4:47 PM
 * Purpose: Calculate the miles Per Gallon the Car Gets
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
int GasTank=15, //Gallons Per Tank
    Mileage=375,//Miles Per Tank
    MPG;        //Miles Per Gallon

//Process or Map solutions
MPG=Mileage/GasTank;

//Display the output
cout<<"The car gets "<<MPG<<" miles per gallon."<<endl;  
    
//Exit the Program
    return 0;
}

