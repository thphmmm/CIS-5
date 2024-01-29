/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 11, 2024, 5:36 PM
 * Purpose: Counting Cookies Calories
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
unsigned short cookAte, //How many cookies eaten
               totCal,  //Total calories eaten
               totCalP; //Totat calorie per cookie
    
    //Initialize or input i.e. set variable values
    cin>>cookAte;
    totCalP= 75,
    totCal=cookAte*totCalP;
    
    //Map inputs -> outputs
//40 cookies in a bag = 10 servings,
//4 cookies = 1 serving = 300 calorie,
//1 cookie = 1/4 serving = 75 calorie;


    //Display the outputs
cout <<"Calorie Counter"<<endl;
cout<<"How many cookies did you eat?"<<endl;
cout<<"You consumed "<<totCal<<" calories.";

    //Exit stage right or left!
    return 0;
}