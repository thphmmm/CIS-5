/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 1, 2019, 10:20 PM
 * Purpose: Sums 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int pSum = 0,//Sum of positive numbers
        nSum = 0,//Sum of negative numbers
        vari = 0,//Variable zero
        counter = 1;//Makes loop repeat 10 times
        
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive, or ,negative"<<endl;
    while(counter<11)//Loop will repeat 10 times
         counter +=1;//counter incease each times
         cin>>vari;//Variable will take one number at a time since they are separated
         if (vari>0) pSum+=vari;//If test is + then vari will be updated
         else nSum+=vari;//If test is - then vari will be updated
         
    //Map inputs -> outputs
    
    //Display the outputs
cout<<"Negative sum = "<<nSum<<endl;
cout<<"Positive sum = "<<pSum<<endl;
cout<<"Total sum    =   "<<pSum+nSum;

    //Exit stage right or left!
    return 0;
}
