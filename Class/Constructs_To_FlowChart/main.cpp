/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 22, 2024, 5:48 PM
 * Purpose: Template used to start all projects
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all variables
    int x;
    string msg;
    
    //Input the value of x
    cout<<"Input the value of x, x must be integer >= 0 and <= 2"<<endl;
    cin>>x;
    
    //Branching Construct Independent - If
    if(x<0)         cout<<"Value too Small"<<endl;
    if(x>2)         cout<<"Value too Large"<<endl;
    if(x>=0&&x<=2)  cout<<"In Range [0,2]"<<endl;
    
    //Branching Construct Dependent - If - else if
    if(x<0)         cout<<"Value too Small"<<endl;
    else if(x>2)    cout<<"Value too Large"<<endl;
    else            cout<<"In Range [0,2]"<<endl;
    
    //Branching Ternary Operator which are really good at returning 1
    //Value and must be of the same type
    msg = (x<0? "Value too Small\n":
           x>2? "Value too Large\n":
                "In Range [0,1]\n");
    cout<<msg;
    
    //Branching Switch, but no really good way to test ranges with switch
    //Just discrete values
    switch(x){
        case 0:
        case 1:
        case 2: cout<<"In Range [0,2]"<<endl;break;
        default:cout<<"Value too Small or too Large<<endl";
    }
    
    //Looping Construct for-loop, note: i variable scope is inside for loop
    int floop=5;
    for(int i=1; i<=floop; i++) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    //Looping Construct do-while-loop, note: i variable scope outside of loop
    int dloop=5, i=1;
    do{
        cout<<i<<" ";
        ++i;
    }while(i<=dloop);
    cout<<endl;
    
    //Looping Construct while-loop, note: j variable used can't re-declare
    //a loop counter named i because is already in scope from do-while
    int wloop=5, j=1;
    while(j<=wloop){
        cout<<j<<" ";
        ++j;
    }
    cout<<endl;
    
    //Exit the Program
    return 0;
}

