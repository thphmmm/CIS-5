/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 14, 2024, 8:40 PM
 * Purpose:  Sort the Names using string compare
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring>   //Input Strings
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1, name2, name3;
    
    //Initialize or input i.e. set variable value
    cin>>name1>>name2>>name3;
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
 
    if (name1 > name2) {
        string temp = name1;
        name1 = name2;
        name2 = temp;
    }
    if (name2 > name3) {
        string temp = name2;
        name2 = name3;
        name3 = temp;
    }
    if (name1 > name2) {
        string temp = name1;
        name1 = name2;
        name2 = temp;
    }
    
    //Map inputs -> outputs
    
    
    //Display the outputs
cout<<name1<<endl<<name2<<endl<<name3;

    //Exit stage right or left!
    return 0;
}