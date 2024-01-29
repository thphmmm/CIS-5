/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 21, 2024, 11:16 PM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cstring>   //Input Strings
#include <cmath>     //Math Library
#include <ctime>     //Time Input
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes
float max(float a, float b) {
    return (a > b) ? a : b;
}
float max(float a, float b, float c) {
    return max(max(a, b), c);
}
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char option,//Option to choose from menu
                  nOpshun;//Number of options
    
    //The Process -> Map Inputs to Outputs
    nOpshun='3';//In this case we have 3 options
    do{
        //Display user choice
        cout<<"Gaddis 9thEd Chap5 Prob1 Sum"<<endl;
        cout<<"Gaddis 9thEd Chap5 Prob7 PayInPennies"<<endl;
        cout<<"Gaddis 9thEd Chap5 Prob13 MinMax"<<endl;
        cout<<"Gaddis 9thEd Chap5 Prob22 Rectangle"<<endl;
        cout<<"Gaddis 9thEd Chap5 Prob23 Pattern"<<endl;
        cout<<"Savitch 9thEd Chap4 Prob1 MPG"<<endl;
        cout<<"Savitch 9Ed Chap4 Prob2 FuelEff"<<endl;
        cout<<"avitch 9Ed Chap4 Prob4 Inflation"<<endl;
        cout<<"Savitch 9Ed Chap4 Prob5 EstCost"<<endl;
        cout<<"Savitch 9Ed Chap4 Prob9 2or3Max"<<endl;
        cin>>option;//Read in the option
        //Use a switch case to implement
        switch(option){
            case '1':{
                    cout<<endl<<"Gaddis 9thEd Chap5 Prob1 Sum"<<endl<<endl;
                     //Declare Variables
                    int input, sum = 0;

                    //Initialize or input i.e. set variable values
                    cin >> input;

                    //Map inputs -> outputs
                    while (input <= 0) {
                        cin >> input;
                    }
                    for (int i = 1; i <= input; ++i) {
                        sum += i;
                    }

                    //Display the outputs
                    cout<<"Sum = "<<sum;
                     }break;
            case '2':{
                    cout<<endl<<"Gaddis 9thEd Chap5 Prob7 PayInPennies"<<endl<<endl;
                    //Set random seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare all variables
            unsigned int pyPDay,paySum; //Pay per day and daily sum
            unsigned short nDays;       //Number of days to run calculation

            //Initialize all variables
            pyPDay=1;//In Pennies
            paySum=0;//In Pennies
            nDays=rand()%31+1;//[1,31]

            //Process or Map solutions
            for(int day=1;day<=nDays;day++){
                paySum+=pyPDay;
               pyPDay<<=1; //(the same as pyPDay*=2) Double each day
            }

            //Display the output        
            float dollar=paySum/100,
                  penny=paySum%100;
            cout<<"Pay = "<<setprecision(2)<<"$"<<dollar
                <<((penny<10)?"0":"")
                <<penny;
                     }break;
            case '3':{
                cout<<endl<<"Gaddis 9thEd Chap5 Prob13 MinMax"<<endl<<endl;
                //Declare Variables
                int num, 
                    Lrgnum, //Largest Number
                    Smlnum; //Smallest Number

                //Initialize or input i.e. set variable values
                cin>>num;
                Lrgnum=Smlnum=num;

                //Map inputs -> outputs
                while(num!=-99) {
                    if(num>Lrgnum) {
                      Lrgnum=num;
                    }if(num<Smlnum) {
                        Smlnum=num;
                    }cin>>num;
                }

                //Display the outputs
                cout<<"Smallest number in the series is "<<Smlnum<<endl;
                cout<<"Largest  number in the series is "<<Lrgnum;
                     }break;
            case '4':{
                cout<<endl<<"Gaddis 9thEd Chap4 Prob14 Race"<<endl<<endl;
                //Declare Variables
                int rLngth; //Rectangle Length of each side

                //Initialize or input i.e. set variable values
                 cin>>rLngth;

                //Map inputs -> outputs
                 if(rLngth<=0 || rLngth>15) {
                    cout<<"Enter a positive integer no greater than 15."<<endl;
                    return 1; // Exit with an error code
                }

                for (int r=0; r<rLngth; ++r) {
                    for (int s=0; s<rLngth; ++s) {
                        cout<<'X';
                    }
                    if (r<rLngth - 1) {
                        cout<<'\n'; // Output newline for all rows except the last one
                    }
                }
                     }break;
            case '5':{
                cout<<endl<<"Gaddis 9thEd Chap5 Prob23 Pattern"<<endl<<endl;
                //Declare Variables
                int size;

                //Initialize or input i.e. set variable values
                cin>>size;

                //Map inputs -> outputs
                for(int a=1; a<=size; ++a) {
                    for(int b=1; b<=a; ++b) {
                        cout<<"+";
                    }
                    if(a<=size) {
                        cout<<endl<<endl; 
                    }
                }

                for(int a=size - 1; a>=1; --a) {
                    for(int b=1; b<=a; ++b) {
                        cout<<"+";
                    }
                    if(a>=1) {
                        cout<<endl<<endl;
                    }
                }
                     }break;
            case '6':{
                cout<<endl<<"Savitch 9thEd Chap4 Prob1 MPG"<<endl<<endl;
                //Declare Variables
                const float LtPG = 0.264179; // Liters per gallon
                float MPG,                  // Miles per gallon
                      LtConsm,              // Liters of gasoline consumed
                      numMile,              // Number of miles traveled by car
                      GalCon;             // Gallons of gasoline consumed

                //Initialize or input i.e. set variable values
                char repeat;
                cout<<fixed<<setprecision(2)<<showpoint;
                do {
                    cout<<"Enter number of liters of gasoline:"<<endl<<endl;
                    cin>>LtConsm;
                    cout<<"Enter number of miles traveled:"<<endl<<endl;
                    cin>>numMile;

                    //Map inputs -> outputs
                    GalCon = LtConsm * LtPG;
                    MPG = numMile / GalCon;

                     //Display the outputs
                    cout<<"miles per gallon:"<<endl<<MPG<<endl;
                    cout<<"Again:"<<endl;
                    cin>>repeat;
                if (repeat == 'y' || repeat == 'Y') {
                        cout << endl;
                    }
                } while (repeat == 'y' || repeat == 'Y');
                     }break;
            case '7':{
                cout<<endl<<"Savitch 9Ed Chap4 Prob2 FuelEff"<<endl<<endl;
                //Declare Variables
                const float LtPG = 0.264179;// Liters per gallon
                float MPG, MPG2,            // Miles per gallon
                      LtConsm, LtCon2,      // Liters of gasoline consumed
                      numMile, numMil2,     // Number of miles traveled by car
                      GalCon, GalCon2;      // Gallons of gasoline consumed

                //Initialize or input i.e. set variable values
                char repeat;
                cout<<fixed<<setprecision(2)<<showpoint;
                do {
                    cout<<"Car 1"<<endl;
                    cout<<"Enter number of liters of gasoline:"<<endl;
                    cin>>LtConsm;
                    cout<<"Enter number of miles traveled:"<<endl;
                    cin>>numMile;
                    //Map inputs -> outputs for car 1
                    GalCon=LtConsm*LtPG;
                    MPG=numMile/GalCon;
                    cout<<"miles per gallon: "<<MPG<<endl<<endl;

                    cout<<"Car 2"<<endl;
                    cout<<"Enter number of liters of gasoline:"<<endl;
                    cin>>LtCon2;
                    cout<<"Enter number of miles traveled:"<<endl;
                    cin>>numMil2;
                    //Map inputs -> outputs for car numMile2
                    GalCon2=LtCon2*LtPG;
                    MPG2=numMil2/GalCon2;
                    cout<<"miles per gallon: "<<MPG2<<endl<<endl;

                    if(MPG>MPG2) {
                        cout<<"Car 1 is more fuel efficient"<<endl<<endl;
                    } else if(MPG2>MPG) {
                        cout<<"Car 2 is more fuel efficient"<<endl<<endl;
                    } else {
                        cout<<"Both cars have the same fuel efficiency."<<endl;
                    }
                     //Display the outputs
                cout<<"Again:"<<endl;
                    cin>>repeat;

                if (repeat == 'y' || repeat == 'Y') {
                        cout << endl;
                    }
                } while (repeat == 'y' || repeat == 'Y');
                     }break;
            case '8':{
                cout<<endl<<"Savitch 9Ed Chap4 Prob4 Inflation"<<endl<<endl;
                 //Declare Variables
                float pstYrP, //Past year price in $'s
                      tdayP,  //Today's price in $'s
                      infltR; //Inflation Rate in Percentage
                char repeat;

                //Initialize or input i.e. set variable values
                infltR=((tdayP - pstYrP)/pstYrP)*100.0;
                cout<<fixed<<setprecision(2);

                //Map inputs -> outputs
                do {
                cout<<"Enter current price:"<<endl;
                cout<<"Enter year-ago price:"<<endl;
                cout<<"Inflation rate:"<<infltR<<"%"<<endl<<endl;

                cout<<"Enter current price:"<<endl;
                cout<<"Enter year-ago price:"<<endl;
                cout<<"Inflation rate:"<<infltR<<"%"<<endl<<endl;
                }

                //Display the output
                cout<<"Again:"<<endl;
                cin>>repeat;

                if (repeat == 'y' || repeat == 'Y') {
                        cout << endl;
                    }
                } while (repeat == 'y' || repeat == 'Y');    
                            }
                     }break;
            case '9':{
                    cout<<endl<<"Savitch 9Ed Chap4 Prob5 EstCost"<<endl<<endl;
                     //Set the random number seed
    
                    //Declare Variables

                    //Initialize or input i.e. set variable values

                    //Map inputs -> outputs

                    //Display the outputs
                     }break;
            case '10':{
                    cout<<endl<<"Savitch 9Ed Chap4 Prob9 2or3Max"<<endl<<endl;
                     //Declare Variables
                    int input, sum = 0;

                    //Initialize or input i.e. set variable values
                    cin >> input;

                    //Map inputs -> outputs
                    while (input <= 0) {
                        cin >> input;
                    }
                    for (int i = 1; i <= input; ++i) {
                        sum += i;
                    }

                    //Display the outputs
                    cout<<"Sum = "<<sum;
                     }break;
             default:cout<<endl<<"Exit Program"<<endl<<endl;
        }
    }while(option<=nOpshun);
    
    //Exit the Program
    return 0;
}