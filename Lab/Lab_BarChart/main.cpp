/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 18, 2024, 7:29 PM
 * Purpose: Create BarChart for Sales
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all variables
    char asterk='*';         //Asterisk
    const int SPAstr=100,    //Sales Per Asterisk
              str=5;         //Number of Stores
    int s[str];              //Sales Per Number of Store
    
    //Initialize all variables
    for(int a=0; a<str; ++a){
        cout<<"Enter today's sales for store " <<a+1<< ": ";
        cin>>s[a];
    }
    
    //Process or Map solutions
    for(int a=0; a<str; ++a){
        cout<<"Store "<<a+1<<": ";
    for(int b=0; b<s[a]/SPAstr; ++b){
            cout<<asterk;
        }cout << endl;
    }
    
    //Display the output
    
    //Exit the Program
     return 0;
}

