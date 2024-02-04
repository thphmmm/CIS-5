/* 
 * Author: Thu Pham
 * Created on January 28,2024 7:14 PM
 * Purpose:  Is the integer a Prime Number?
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    // Declare Variables
    int num;

    // Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>num;
    
    // Process/Map inputs to outputs
    if (num<=1) {
        cout<<num<<" is not a prime number."<<endl;
        return 0; // Indicate successful execution
    }

    // Check for divisibility up to the square root of num
    bool isPrime=true;
    for (int i=2; i<num && isPrime; ++i) {
        if (num %i == 0) {
            isPrime=false;
        }
    }

    // Output data
    if (isPrime) {
        cout<<num<<" is prime.";
    } else {
        cout<<num<<" is not prime.";
    }
    //Exit stage right!
    return 0;
}