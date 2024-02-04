/* 
 * Author: Thu Pham
 * Created on January 31,2024  11:03 PM
 * Purpose:  Remove the Lowest Score
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void getScre(int&, int&, int&, int&, int&);
float calcAvg(int, int, int, int, int);
int fndLwst(int, int, int, int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int score1, score2, score3, score4, score5;
    
    //Initialize Variables
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    getScre(score1, score2, score3, score4, score5);
    
    //Process/Map inputs to outputs
    float average = calcAvg(score1, score2, score3, score4, score5);
    
    //Output data
    cout<<fixed<<setprecision(1)<<showpoint;
    
    
    cout<<"The average test score = "<<average;
   
    //Exit stage right!
    return 0;
}
void getScre(int& s1, int& s2, int& s3, int& s4, int& s5) {
    cout<<"Input the 5 test scores."<<endl;
    cin>>s1>>s2>>s3>>s4>>s5;

    // Validate scores (range 1 to 100)
    while (s1<1 || s1>100 || s2<1 || s2>100 || s3<1 || s3>100 || s4<1 || s4>100 || s5<1 || s5>100) {
        cout<<"Invalid input"<<endl;
        cin>>s1>>s2>>s3>>s4>>s5;
    }
}

// Function to calculate the average of the four highest scores
float calcAvg(int s1, int s2, int s3, int s4, int s5) {
    int lowest = fndLwst(s1, s2, s3, s4, s5);
    float sum = s1 + s2 + s3 + s4 + s5 - lowest;
    return sum / 4.0;
}

// Function to find the lowest of the five scores
int fndLwst(int s1, int s2, int s3, int s4, int s5) {
    int lowest = s1;

    if (s2<lowest) lowest=s2;
    if (s3<lowest) lowest=s3;
    if (s4<lowest) lowest=s4;
    if (s5<lowest) lowest=s5;

    return lowest;
}