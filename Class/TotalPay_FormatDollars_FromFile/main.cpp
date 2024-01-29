/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 18, 2024, 8:08 PM
 * Purpose: Read from a file of daily pay and 
 *          Output the daily sum
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
    fstream in,out;       //Input the daily pay, output the daily sum
    unsigned int pay,dSum;//Pay per day and daily sum
    char fName1[]="pay.dat";
    string fName2="sum.dat";
    
    //Initialize all variables
    in.open(fName1,ios::in);
    out.open(fName2,ios::in);
    
    //Process or Map solutions
    for(int day=1;day<=31;day++){
        in>>dSum;
        int dollar=dSum/100;
        int penny=dSum%100;
        out<<"$"<<setw(10)<<dollar<<"."
                <<((penny<10)?"0":"")
                <<penny<<endl;
    }
    
    //Display the output
    
    
    //Exit the Program
    in.close();
    out.close();
    return 0;
}

