/* 
 * Author: Thu Pham
 * Created on January 27,2024 10:27 PM
 * Purpose:  Write min and max of 3 integers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int num1, int num2, int num3, int &min, int &max);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int a, b, c, mnValue, mxValue;

    //Initialize Variables
    cout<<"Input 3 numbers"<<endl;
    cin>>a>>b>>c;
    
    //Process/Map inputs to outputs
    minmax(a, b, c, mnValue, mxValue);
    
    //Output data
    cout<<"Min = "<<mnValue<<endl;
    cout<<"Max = "<<mxValue;

    //Exit stage right!
    return 0;
}

    //Function to find minimum and maximum
    void minmax(int num1, int num2, int num3, int &min, int &max) {
        min=num1;
        max=num1;

        if(num2<min) {
            min=num2;
        } else if(num2>max) {
        max=num2;
    }

        if(num3<min) {
            min=num3;
        } else if(num3>max) {
            max=num3;
    }
}