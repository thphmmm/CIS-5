/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 11, 2019, 4:39 PM
 * Purpose:  Calculate test score average
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
  float ts1,ts2,ts3,ts4,ts5; //test scores
  float avgts;               //Average test score
        
    //Initialize or input i.e. set variable values
cin>>ts1;
cin>>ts2,
cin>>ts3;
cin>>ts4;
cin>>ts5;

    //Map inputs -> outputs
avgts = (ts1+ts2+ts3+ts4+ts5)/5;
    
    //Display the outputs
cout<<fixed<<setprecision(1)<<showpoint;
cout<<"Input 5 numbers to average."<<endl;

cout<<"The average = "<<avgts;

    //Exit stage right or left!
    return 0;
}