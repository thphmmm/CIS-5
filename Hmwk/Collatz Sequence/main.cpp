/* 
 * Author: Thu Pham
 * Created on January 28,2024 8:33 PM
 * Purpose:  Collatz Sequence
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)+1<<" steps";
    
    //Output data
    
    //Exit stage right!
    return 0;
}

//Function for Collatz Sequence
int collatz(int n) {
    int steps=0;
    while (n!=1) {
        if (n%2 == 0) {
            //If even, divide by 2
            n=n / 2;
        } else {
            //If odd, multiply by 3 and add 1
            n=3*n+1;
        }
        steps++;
    }
    return steps;
}