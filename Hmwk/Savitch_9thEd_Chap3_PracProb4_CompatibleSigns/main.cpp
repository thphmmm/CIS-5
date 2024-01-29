/* 
 * File:   main.cpp
 * Author: Thu pham
 * Created on January 14, 2024, 3:47 PM
 * Purpose:  Horoscope Compatibility
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring>   //String Input
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    string sign1, sign2, elemt1, elemt2;
     
    // Input signs
    cin>>sign1>>sign2;

    // Determine elements for each sign
    if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")  {
        elemt1 = "Fire";
    } else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn") {
        elemt1 = "Earth";
    } else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") {
        elemt1 = "Air";
    } else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") {
        elemt1 = "Water";
    }

    if (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius") {
        elemt2 = "Fire";
    } else if (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn") {
        elemt2 = "Earth";
    } else if (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius") {
        elemt2 = "Air";
    } else if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces") {
        elemt2 = "Water";
    } 
    
    //Display the outputs
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    
 if (elemt1 == elemt2) {
    cout<<sign1<<" and "<<sign2<<" are compatible "<<elemt1 <<" signs.";    
    } else {
    cout<<sign1<<" and "<<sign2<<" are not compatible signs.";    
    }
    
   //Exit stage right or left!
    return 0;
}