/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 13, 2024, 4:21 PM
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
    switch(score/10){
        case 10:
        case 9: grade='A';break;
        case 8: grade='B';break;
        case 7: grade='C';break;
        case 6: grade='D';break;
        default: grade='F';    
    }

    //Display the output
    cout<<"Score = "<<static_cast<int>(score)
        <<" give Grade = "<<grade<<endl;    

    //Exit the Program
    return 0;
}

