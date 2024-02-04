/* 
 * Author: Thu Pham
 * Created on January 29,2024  PM
 * Purpose:  Convert from military time to standard
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void Input(int& hours, int& mins);
void cnvrtHr(int& hours, char& ampm);
void Output(int hours, int mins, char ampm);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char ampm;
    int hours, mins;
    char repeat;
    
    //Initialize Variables
    cout<<"Military Time Converter to Standard Time"<<endl;
    
    do {
        Input(hours, mins);

        // Check for valid input
        while (hours < 0 || hours > 23 || mins < 0 || mins > 59) {
            cout << "Invalid time" << endl;
            Input(hours, mins);
        }

        cnvrtHr(hours, ampm);
        Output(hours, mins, ampm);

        // Ask if the user wants to repeat
        cout<<"Would you like to convert another time (y/n)"<<endl;
        cin>>repeat;

    } while (repeat == 'y');
    
    //Process/Map inputs to outputs
    
    
    //Output data
    
    
    //Exit stage right!
    return 0;
}
void Input(int& hours, int& mins) {
    cout<<"Input Military Time hh:mm↵ "<<endl;
    cin>>hours>>mins;
}

// Function to convert to 12-hour notation
void cnvrtHr(int& hours, char& ampm) {
    if (hours>=12) {
        ampm = 'P';
        if (hours > 12) {
            hours -= 12;
        }
    } else {
        ampm = 'A';
        if (hours == 0) {
            hours = 12;
        }
    }
}

// Function to display the output
void Output(int hours, int mins, char ampm) {
    cout<<(hours < 10 ? "0" : "") << hours << ":" << (mins < 10 ? "0" : "") << mins;
    if (ampm == 'A') {
        cout<<" AM";
    } else {
        cout<<" PM";
    }

    cout<<endl;
}