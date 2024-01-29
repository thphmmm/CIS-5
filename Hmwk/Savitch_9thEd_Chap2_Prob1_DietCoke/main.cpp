/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 11, 2024, 8:15 PM
 * Purpose:  Dieter beware
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
    int mssMou,//Mass of Mouse in grams
        mssKMou,//Mass to kill a mouse in grams
        mssCok,//Mass of Coke in grams
        wDietD,//Weight of dieter desires in lbs
        conSwt,//Concentration of sweetner percentage
        C,//Conversion of can grams/lbs
        wDiet,//Weight of dieter in lbs?
        mssKDi,//Mass that can kill dieter?
        amtCans,//Number of cans of Coke?
        mssSwt;//Mass of sweetner?
        
    //Initialize or input i.e. set variable values
    mssMou = 35,//In grams
    mssKMou = 7,//In grams
    mssCok = 350,//In grams
    conSwt = .001,
    C = 453.592,//In gram per pound
    
    //Map inputs -> outputs
    
  //amtCans=(wDiet*C*mssKMou)%(mssCok*conSwt*mssMou);
  
    //Display the outputs
cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
cout<<"Input the desired dieters weight in lbs."<<endl;
cin>>wDietD;
cout<<"The maximum number of soda pop cans"<<endl;
cout<<"which can be consumed is "<<amtCans<<" cans";

    //Exit stage right or left!
    return 0;
}