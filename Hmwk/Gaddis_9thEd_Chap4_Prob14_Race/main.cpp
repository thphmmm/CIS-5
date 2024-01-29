/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 14, 2024, 9:51 PM
 * Purpose:  Place the Runners
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring>   //String Input
#include <ctime>     //Time Input
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(0));
    
    //Declare Variables
    string runner1, runner2, runner3;
    float rtime1, rtime2, rtime3;
    
    //Initialize or input i.e. set variable values
cout<<"Race Ranking Program"<<endl;
cout<<"Input 3 Runners"<<endl;   
cin>>runner1>>rtime1>>runner2>>rtime2>>runner3>>rtime3;
cout<<"Their names, then their times"<<endl;

    //Map inputs -> outputs
if (rtime1 > rtime2) {
        float temTime = rtime1;
        rtime1 = rtime2;
        rtime2 = temTime;

        string tempRun = runner1;
        runner1 = runner2;
        runner2 = tempRun;
    }
    if (rtime2 > rtime3) {
        float temTime = rtime2;
        rtime2 = rtime3;
        rtime3 = temTime;

        string tempRun = runner2;
        runner2 = runner3;
        runner3 = tempRun;
    }
    if (rtime1 > rtime2) {
        float temTime = rtime1;
        rtime1 = rtime2;
        rtime2 = temTime;

        string tempRun = runner1;
        runner1 = runner2;
        runner2 = tempRun;
    }
    
    //Display the outputs
cout<<runner1<<"\t "<<rtime1<<endl;
cout<<runner2<<"\t"<<rtime2<<endl;
cout<<runner3<<"\t"<<rtime3;

    //Exit stage right or left!
    return 0;
}