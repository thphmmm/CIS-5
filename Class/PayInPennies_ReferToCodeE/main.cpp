/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 18, 2024, 8:08 PM
 * Purpose: Code-E Solution with minor mod
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <fstream>  //File Stream Library
#include <iomanip>  //Format Library
#include <cstdlib>  //For Random Function
#include <ctime>    //Time Library
#include <cmath>    //Math Function
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all variables
    unsigned int pyPDay,paySum; //Pay per day and daily sum
    unsigned short nDays;       //Number of days to run calculation
    
    //Initialize all variables
    pyPDay=1;//In Pennies
    paySum=0;//In Pennies
    nDays=rand()%31+1;//[1,31]
    
    //Process or Map solutions
    for(int day=1;day<=nDays;day++){
        paySum+=pyPDay;
       pyPDay<<=1; //(the same as pyPDay*=2) Double each day
    }
    
    //Display the output        
    int dollar=paySum/100;
    int penny=paySum%100;
    cout<<"Recursive Implementation The pay for "<<nDays<<" days"<<endl;
    cout<<"$"<<setw(10)<<dollar<<"."
             <<((penny<10)?"0":"")
             <<penny<<endl;
    
    //Calculation using the bit-shifting or power
    pyPDay=1;
    paySum=(pyPDay<<nDays)-1;
    dollar=paySum/100;
    penny=paySum%100;
    cout<<"Bit-Shifting or Power Implementation The pay for "<<nDays<<" days"<<endl;
    cout<<"$"<<setw(10)<<dollar<<"."
             <<((penny<10)?"0":"")
             <<penny<<endl;
    
    //Calculation using the power function
    paySum=pow(2,nDays)-1; //2 raised to the # of days
    dollar=paySum/100;
    penny=paySum%100;
    cout<<"Cmath Power Implementation The pay for "<<nDays<<" days"<<endl;
    cout<<"$"<<setw(10)<<dollar<<"."
             <<((penny<10)?"0":"")
             <<penny<<endl;
    
    //Exit the Program
   
    return 0;
}

