/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 9, 2024, 10:28 PM
 * Purpose: Trig Calculations
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <cmath>    //Trig Functions
#include <cstdlib>  //Random number library
#include <ctime>    //Time to set the seed
#include <iomanip>  //Format Library

using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
const float PI=4*atan(1);//Constant 3.1415...

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
   
//Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
//Declare all variables
    float degrees, //Angle in degrees
          radians;//Angle in radians
       
//Initialize all variables
  degrees=rand()%181;//[0,180]
    
//Process or Map solutions
  radians=degrees*PI/180;//Covert to radians   
    
//Display the output
  cout<<fixed<<setprecision(4)<<showpoint<<endl;
  cout<<"tan("<<degrees<<" degrees) ="<<tan(radians)<<" radians"<<endl;
  cout<<"sin("<<degrees<<" degrees) ="<<sin(radians)<<" radians"<<endl;
  cout<<"cos("<<degrees<<" degrees) ="<<cos(radians)<<" radians"<<endl;
  cout<<"tan("<<degrees<<" degrees) ="<<sin(radians)/cos(radians)<<" radians"<<endl;
  
//Exit the Program
    return 0;
}


