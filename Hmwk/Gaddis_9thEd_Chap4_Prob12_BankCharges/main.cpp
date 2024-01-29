/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 15, 2024, 2:06 PM
 * Purpose: Bank Charges
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
float checks, checkFe, mntFee, balance, bankFe, bankCh, newBal;
          
    //Initialize or input i.e. set variable values
cin>>balance>>checks;
bankFe=15;
bankCh=10;

    //Map inputs -> outputs
if (checks<20 && checks>0){
    checkFe=checks*.10;
}if (checks>=20 && checks<=39){
    checkFe=checks*.08;
}if (checks>=40 && checks<=59){
    checkFe=checks*.06;
}if (checks>=60){
    checkFe=checks*.04;
}
if (balance<400){
    bankFe;
}
if (balance<0){
    cout<<"Account is overdrawn!";
}

mntFee=bankFe+bankCh;
newBal=balance-checkFe-mntFee;
    //Display the outputs
cout<<fixed<<setprecision(2)<<showpoint;
cout<<"Monthly Bank Fees"<<endl;
cout<<"Input Current Bank Balance and Number of Checks"<<endl;
cout<<"Balance     $   "<<balance<<endl;
cout<<"Check Fee   $     "<<checkFe<<endl;
cout<<"Monthly Fee $    "<<bankCh<<endl;
cout<<"Low Balance $    "<<bankFe<<endl;
cout<<"New Balance $    "<<newBal;

    //Exit stage right or left!
    return 0;
}