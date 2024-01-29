/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 17, 2024, 7:10 PM
 * Purpose: Truth Table
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    
    //Heading
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y  ETC.... 13 COLUMNS"<<endl<<endl;
    
    //Row 1
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<endl;
            
    //Row 2
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<endl;
    
    //Row 3
    x=false;
    y=true;
    cout<<(x&&y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<((x^y)^x?'T':'F')<<"  ";
    cout<<(!(x&&y)?'T':'F')<<"   ";
    cout<<(!(x||y)?'T':'F')<<" ";
    cout<<endl;
    
    //Row 4
    x=false,
    y=false;
    cout<<(!x||!y?'T':'F')<<" ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<((x^y)^y?'T':'F')<<"  ";
    cout<<(!(x&&y)?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    
    //Exit the Program
    return 0;
}