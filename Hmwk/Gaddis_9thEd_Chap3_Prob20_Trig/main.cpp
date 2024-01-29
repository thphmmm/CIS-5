/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 11, 2024, 7:36 PM
 * Purpose: Trig Functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Trig Functions
#include <cstdlib>   //Random Number Library
#include <ctime>     //Time Library to set seed
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);//Constant 3.1415...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
}
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float degrees,//Angle in degrees
          radians;//Angle in radians
          
    //Initialize or input i.e. set variable values
    cin>>degrees;
    
    //Map inputs -> outputs
    radians=degrees*PI/180;//Convert to radians
    
    //"Display the outputs
cout<<"Calculate trig functions"<<endl;
cout<<"Input the angle in degrees."<<endl;
cout<<"sin("<<degrees<<") = "<<setprecision(4)<<sin(radians)<<endl;
cout<<"cos("<<degrees<<") = "<<setprecision(4)<<cos(radians)<<endl;
cout<<"tan("<<degrees<<") = "<<fixed<<setprecision(4)<<tan(radians);

    //Exit stage right or left!
    return 0;