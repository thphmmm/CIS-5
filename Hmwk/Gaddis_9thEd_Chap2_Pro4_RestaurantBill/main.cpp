/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 5, 2024, 1:28 PM
 * Purpose: Restaurant Bill
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    
//Declare all variables

//Initialize all variables
float MealCos =88.67,         //Total Meal charged
      Tax =MealCos*.0675,     //Charged On Meal Cost
      Tip =(MealCos+Tax)*.2,  //Charged After Meal Cost is Taxed
      TotBill;                //Cost After Tax and Tip

//Process or Map solutions
TotBill=MealCos + Tax + Tip;

//Display the output
cout<<"Meal Cost = $"<<setprecision(4)<<MealCos<<endl;
cout<<"Tax = $"<<setprecision(3)<<Tax<<endl;
cout<<"Tip = $"<<setprecision(4)<<Tip<<endl;
cout<<"Total Bill = $"<<setprecision(5)<<TotBill<<endl;    
    
//Exit the Program
    return 0;
}

