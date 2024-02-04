/* 
 * Author: Thu Pham
 * Created on January 30 3:09 PM
 * Purpose:  Count the Sequence and output the Sequence
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
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n)+1;
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}

// Function Definition for Collatz Sequence
int collatz(int n) {
    int steps=0;
    while (n!=1) {
        if (steps>0) {
            cout<<", "; 
        }
        cout<<n;

        if (n%2 == 0) {
            //If even, divide by 2
            n = n / 2;
        } else {
            //If odd, multiply by 3 and add 1
            n=3*n+1;
        }
        steps++;
    }
    cout<<", 1"<<endl;
    return steps;
}