/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 13, 2024, 4:08 PM
 * Purpose: Grade
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <cstdlib> //Random Library
#include <ctime> //Set Random Seed
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));    

    //Declare all variables
    char grade;//Letter grade
    char score;//0-100

    //Initialize all variables
    score=rand()%51+50;//[50,100]

    //Process or Map solutions
    if(score>=90)     grade='A';
    else if(score>=80)grade='B';
    else if(score>=70)grade='C';
    else if(score>=60)grade='D'; 
    else              grade='F';    

    //Display the output
    cout<<"Score = "<<static_cast<int>(score)
        <<" give Grade = "<<grade<<endl;    

    //Exit the Program
    return 0;
}

