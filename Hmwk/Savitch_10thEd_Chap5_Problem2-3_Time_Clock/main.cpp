/* 
 * File: main.ccp  
 * Author: Thu Pham
 * Created on January 30,2024 6:32 PM
 * Purpose:  Time Clock Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void cnvrtHr(int& hours, string& ampm); // Convert to 12 Hours
void newTime(int& hours, int& min, int waitMin);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int crrtHrs, crrtMin, waitHrs, waitMin;
    string ampm, Again;
    
    //Initialize or input i.e. set variable values
    do {
        cout<<"Enter hour:"<<endl<<endl;
        cin>>crrtHrs;
        cout<<"Enter minutes:"<<endl<<endl;
        cin>>crrtMin;
        cout<<"Enter A for AM, P for PM:"<<endl<<endl;
        cin>>ampm;

        // Convert 12-hour time to 24-hour time
        if (ampm == "pm" || ampm == "PM") {
            crrtHrs+=12;
        }
        
        
        //Input waiting time
        cout<<"Enter waiting time:"<<endl<<endl;
        cin>>waitMin;

        newTime(crrtHrs, crrtMin, waitMin);
        cnvrtHr(crrtHrs, ampm);
        
        
    //Map inputs -> output
    cout<<"Current time = "<<crrtHrs<<":"<<(crrtMin<10? "0" : "")<<crrtMin<<" "<<ampm<<endl;
    cout<<"Time after waiting period = "<<crrtHrs<<":"<<(crrtMin<10?"0": "")<<crrtMin<<" "<<ampm<<endl<<endl;
        
    //Display the outputs
    cout<<"Again:"<<endl; //Ask if the user wants to run again
    cin>>Again; 
  
    } while (Again == "y" || Again == "Y");

    //Exit stage right or left!
    return 0;
}
// Function Definitions
void cnvrtHr(int& hours, string& ampm) { // Convert to 12 Hours
    if (hours > 12) {
        hours -= 12;
        ampm = "PM";
    } else {
        ampm = "AM";
    }
}

void newTime(int& hours, int& min, int waitMin) {
    min += waitMin;
    hours += min / 60; 
    min %= 60; 
    hours %= 24;
    }