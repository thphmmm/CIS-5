/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 31, 2024, 2:15 PM
 * Purpose:  Prime Investigation
 *
*/

//System Libraries
#include <iostream>  //Input-Ouput Library
#include <cmath>     //Sqrt Function
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
bool isPrime(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    for(int i=-5;i<=100;i++){
        bool prime=isPrime(i);
        cout<<"The number "<<i<<(prime?" is ":" is not ")<<"Prime"<<endl;
    }
    //Display the output

    //Exit the Program
    return 0;
}

bool isPrime(int p){
    if(p<2)return false;
    bool isPrime=true;
    for(int i=2;i<=sqrt(p)&&isPrime;i++){
        if(p%i==0)isPrime=false;
    }
    return isPrime;
}