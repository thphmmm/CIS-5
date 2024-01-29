/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 4, 2024, 12:11 AM
 * Purpose: \Sales Tax
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
float STax = .04,       //State Tax Percent
      CTax = .02,       //County Tax Percent
      TotSale = 95,     //In dollars
TotSTx= STax*TotSale,   //State Tax in Dollars
TotCTx= CTax*TotSale;   //County Tax in Dollars

//Process or Map solutions


//Display the output
cout<<"The total state tax on the purchase is $"<<TotSTx<<endl;
cout<<"The total county tax on the purchase is $"<<TotCTx<<endl;

//Exit the Program
        
    return 0;
}


