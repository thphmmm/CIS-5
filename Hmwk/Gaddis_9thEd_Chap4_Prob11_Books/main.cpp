/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 15, 2024, 12:36 PM
 * Purpose: Book Worm
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
unsigned short Books,  //How many books purchased
               Points; //How many points earned
        
    
    //Initialize or input i.e. set variable values
cout<<"Book Worm Points"<<endl;
cout<<"Input the number of books purchased this month."<<endl;
cin>>Books;

    //Map inputs -> outputs
if (Books ==0){ 
Points = 0;
}
if (Books ==1){
Points = 5;
}
if (Books ==2){
Points = 15;
}
if (Books ==3){
Points = 30;
}
if (Books>=4){
Points = 60;
}    
    //Display the outputs
cout<<"Books purchased =  "<<Books<<endl;
cout<<"Points earned   = "<<Points;

    //Exit stage right or left!
    return 0;
}