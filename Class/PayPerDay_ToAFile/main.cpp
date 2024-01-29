/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 18, 2024, 8:08 PM
 * Purpose: Write a file of daily pay
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <fstream>  //File Stream Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all variables
    fstream out;     //Output the daily pay
    unsigned int pay;//Pay per day
    char fName[]="pay.dat";
    
    
    //Initialize all variables
    out.open(fName,ios::out);
    pay=1;//Pay in Pennies
    
    //Process or Map solutions
    for(int day=1;day<=31;day++){
        out<<setw(10)<<pay<<endl;
        pay*=2;//Pay=2*pay
    }
    
    //Display the output
    
    
    //Exit the Program
    out.close();
    return 0;
}

