/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 17, 2024, 3:48 PM
 * Purpose: Template used to start all projects
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    short int x,sumPos,sumNeg
    char counter, nTimes;
    
    //Initialize all variables
    sumPos=sumNeg=counter=0;
    nTimes=10; 
    
    //Process or Map solutions
    while(++counter<=nTimes){
        cin>>x;
        sumPos+=x>0?x:0;
        sumNeg+=x<0?x:0;
    }
    
    //Display the output
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cout<<"Negative sum = "<<setw(3)<<sumNeg<<endl;
    cout<<"Positive sum = "<<setw(3)<<sumPos<<endl;
    cout<<"Total sum = "<<setw(3)<<sumNeg+sumPos;
    
    //Exit the Program
    return 0;
}

