/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 11, 2019, 9:19 PM
 * Purpose:  Calculate room occupancy
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
    bool repeat = true; //repeat inputs
    int rmCapa,//Room Capacity
        numPpl;//# of people
        
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>rmCapa>>numPpl;
    
    if (numPpl<=rmCapa);//Can hold meeting legally
    else (numPpl>=rmCapa);//Cannot legally hold meetings
    
    //Map inputs -> outputs
    
    //Display the outputs
cout<<"Meeting cannot be held."<<endl;
cout<<"Reduce number of people by 100 to avoid fire violation.";

    //Exit stage right or left!
    return 0;
}