/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 5, 2024, 2:29 PM
 * Purpose: Calculate the Ocean Level Over the Years
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
float OLevel = 1.5,//Millimeters per year
      OLevelF= OLevel*5,//In 5 Years
      OLevelS= OLevel*7,//In 7 Years
      OLevelT= OLevel*10;//In 10 Years

//Process or Map solutions

//Display the output
cout<<"Ocean Level in 5 Years will be "<<OLevelF<<" millimeters higher than the current one."<<endl;    
cout<<"Ocean Level in 7 Years will be "<<OLevelS<<" millimeters higher than the current one."<<endl;
cout<<"Ocean Level in 10 Years will be "<<OLevelT<<" millimeters higher than the current one."<<endl;

//Exit the Program
    return 0;
}

