/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on July 6th, 2023, 10:16 AM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char option,//Option to choose from menu
                  nOpshun;//Number of options
    
    //The Process -> Map Inputs to Outputs
    nOpshun='3';//In this case we have 3 options
    do{
        //Display user choice
        cout<<"Choose from the options displayed"<<endl;
        cout<<"1 -> Question 1"<<endl;
        cout<<"2 -> Question 2"<<endl;
        cout<<"3 -> Question 3"<<endl;
        cout<<"4 -> Question 3"<<endl;
        cout<<"5 -> Question 3"<<endl;
        cout<<"6 -> Question 3"<<endl;
        cout<<"7 -> Question 3"<<endl;
        cout<<"8 -> Question 3"<<endl;
        cin>>option;//Read in the option
        
        //Use a switch case to implement
        switch(option){
            case '1':cout<<endl<<"Question 1 Here"<<endl<<endl;break;
            case '2':cout<<endl<<"Question 2 Here"<<endl<<endl;break;
            case '3':cout<<endl<<"Question 3 Here"<<endl<<endl;break;
            case '4':cout<<endl<<"Question 1 Here"<<endl<<endl;break;
            case '5':cout<<endl<<"Question 1 Here"<<endl<<endl;break;
            case '6':cout<<endl<<"Question 1 Here"<<endl<<endl;break;
            case '7':cout<<endl<<"Question 1 Here"<<endl<<endl;break;
            case '8':cout<<endl<<"Question 1 Here"<<endl<<endl;break;
             default:cout<<endl<<"Exit Program"<<endl<<endl;
        }
    }while(option<=nOpshun);
    
    //Exit the Program
    return 0;
}