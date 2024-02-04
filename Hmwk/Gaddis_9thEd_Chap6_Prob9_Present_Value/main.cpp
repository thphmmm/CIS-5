/* 
 * Author: Thu Pham
 * Created on January 31,2024  10:28 PM
 * Purpose:  Calculate the present value
 */

//System Libraries
#include <iostream>
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float ftValue, //Future Value
          anlIntR;  //Annual Interest Rate
    int nYears; //Number of years
    
    //Initialize Variables
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>ftValue;
    cout<<"Input the Number of Years"<<endl;
    cin >> nYears;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>anlIntR;
    
    //Process/Map inputs to outputs
    anlIntR/=100.0;
    float pValue = ftValue; //Present day value
    for (int i=0; i<nYears; ++i) {
        pValue/=(1+anlIntR);
    }

    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<pValue;
    
    //Exit stage right!
    return 0;
}