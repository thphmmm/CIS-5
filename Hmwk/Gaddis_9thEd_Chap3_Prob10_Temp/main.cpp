/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 11, 2024, 6:48 PM
 * Purpose:  Converting fahrenheit to Celsius
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
    float F, //Fahrenheit
          C; //Celsius
                   
    //Initialize or input i.e. set variable values
    cin>>F;
    cin>>C;
    
    //Map inputs -> outputs
    C=5/9*(F-32); //Equation to find degrees centrigrade
    F=9/5*(C+32);   //Equation to find degrees fahrenheit
    
    //Display the outputs
cout<<fixed<<setprecision(1)<<showpoint;
cout<<"Temperature Converter"<<endl;
cout<<"Input Degrees Fahrenheit"<<endl;
cout<<F<<" Degrees Fahrenheit = "<<C<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}