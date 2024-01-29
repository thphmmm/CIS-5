/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 17, 2024, 6:16 AM
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
        cout<<"Gaddis 9thEd Chap4 Prob8 Sort Names"<<endl;
        cout<<"Gaddis 9thEd Chap4 Prob11 Books"<<endl;
        cout<<"Gaddis 9thEd Chap4 Prob12 Bank Charges"<<endl;
        cout<<"Gaddis 9thEd Chap4 Prob14 Race"<<endl;
        cout<<"Gaddis 9thEd Chap4 Prob23 ISP"<<endl;
        cout<<"Savitch 9thEd Chap3 PracProb Rock Paper Scissors"<<endl;
        cout<<"Savitch_9thEd Chap3 Prob3 Roman Conversion"<<endl;
        cout<<"Savitch 9thEd Chap3 PracProb4 Compatible Signs"<<endl;
        cin>>option;//Read in the option
        //Use a switch case to implement
        switch(option){
            case '1':{
                    cout<<endl<<"Gaddis 9thEd Chap4 Prob8 Sort Names"<<endl<<endl;
                    //Declare Variables
                    string name1, name2, name3;

                    //Initialize or input i.e. set variable value
                    cin>>name1>>name2>>name3;
                    cout<<"Sorting Names"<<endl;
                    cout<<"Input 3 names"<<endl;

                    if (name1 > name2) {
                        string temp = name1;
                        name1 = name2;
                        name2 = temp;
                    }
                    if (name2 > name3) {
                        string temp = name2;
                        name2 = name3;
                        name3 = temp;
                    }
                    if (name1 > name2) {
                        string temp = name1;
                        name1 = name2;
                        name2 = temp;
                    }

                    //Map inputs -> outputs


                    //Display the outputs
                    cout << name1 << endl;
                    cout << name2 << endl;
                    cout << name3 << endl;
                     }break;
            case '2':{
                    cout<<endl<<"Gaddis 9thEd Chap4 Prob11 Books"<<endl<<endl;
                    //Declare Variables
                    unsigned short Books,  //How many books purchased
                    Points; //How many points earned
       
                    //Initialize or input i.e. set variable values
                    cout<<"Book Worm Points"<<endl;
                    cout<<"Input the number of books purchased this month."<<endl;
                    cin>>Books;

                        //Map inputs -> outputs
                    if (Books ==0){ 
                    Points = 0;
                    }
                    if (Books ==1){
                    Points = 5;
                    }
                    if (Books ==2){
                    Points = 15;
                    }
                    if (Books ==3){
                    Points = 30;
                    }
                    if (Books>=4){
                    Points = 60;
                    }    
                        //Display the outputs
                    cout<<"Books purchased =  "<<Books<<endl;
                    cout<<"Points earned   = "<<Points<<endl;
                     }break;
            case '3':{
                cout<<endl<<"Gaddis 9thEd Chap4 Prob12 Bank Charges"<<endl<<endl;
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
                cout<<"New Balance $    "<<newBal<<endl;
                     }break;
            case '4':{
                cout<<endl<<"Gaddis 9thEd Chap4 Prob14 Race"<<endl<<endl;
                //Set the random number seed
                srand(static_cast<unsigned int>(0));

                //Declare Variables
                string runner1, runner2, runner3;
                float rtime1, rtime2, rtime3;

                //Initialize or input i.e. set variable values
                cout<<"Race Ranking Program"<<endl;
                cout<<"Input 3 Runners"<<endl;   
                cin>>runner1>>rtime1>>runner2>>rtime2>>runner3>>rtime3;
                cout<<"Their names, then their times"<<endl;

                //Map inputs -> outputs
                if (rtime1 > rtime2) {
                    float temTime = rtime1;
                    rtime1 = rtime2;
                    rtime2 = temTime;

                    string tempRun = runner1;
                    runner1 = runner2;
                    runner2 = tempRun;
                }
                if (rtime2 > rtime3) {
                    float temTime = rtime2;
                    rtime2 = rtime3;
                    rtime3 = temTime;

                    string tempRun = runner2;
                    runner2 = runner3;
                    runner3 = tempRun;
                }
                if (rtime1 > rtime2) {
                    float temTime = rtime1;
                    rtime1 = rtime2;
                    rtime2 = temTime;

                    string tempRun = runner1;
                    runner1 = runner2;
                    runner2 = tempRun;
                }

                //Display the outputs
                cout<<runner1<<"\t "<<rtime1<<endl;
                cout<<runner2<<"\t"<<rtime2<<endl;
                cout<<runner3<<"\t"<<rtime3<<endl;
                     }break;
            case '5':{
                cout<<endl<<"Gaddis 9thEd Chap4 Prob23 ISP"<<endl<<endl;
                //Declare Variables
                char package;
                int hours;
                float A = 9.95,
                      B = 14.95,
                      C = 19.95,
                      addratA = 2.00,
                      addratB = 1.00;
                const int maxHrs = 744;

                //Initialize or input i.e. set variable values
                cout<<"ISP Bill"<<endl;
                cout<<"Input Package and Hours"<<endl;
                cin>>package>>hours;

                //Map inputs -> outputs
                float totAmt;
                     if (package == 'A') {
                        totAmt = A + (hours > 10 ? addratA * (hours - 10) : 0);
                    } else if (package == 'B') {
                        totAmt = B + (hours > 20 ? addratB * (hours - 20) : 0);
                    } else if (package == 'C') {
                        totAmt = C;
                    }

                //Display the outputs
                cout<<"Bill = $ "<<totAmt<<endl;
                     }break;
            case '6':{
                cout<<endl<<"Savitch 9thEd Chap3 PracProb Rock Paper Scissors"<<endl<<endl;
                //Declare Variables
                char p1, p2;
                string msg;

                //Initialize or input i.e. set variable values
                cin>>p1>>p2;
                msg="Nothing";

                //Map inputs -> outputs
                msg=p1==p2?"Nobody wins":msg;
                p1-=p1>=97?32:0;
                p2-=p2>=97?32:0;
                if(p1=='R'){
                    if(p2=='P') msg="Paper covers rock.";
                    if(p2=='S') msg="Rock breaks scissors.";
                }else if(p1=='P'){
                    if(p2=='R') msg="Paper covers rock.";
                    if(p2=='S') msg="Scissors cuts paper.";
                }else if(p1=='S'){
                     if(p2=='R') msg="Rock breaks scissors.";
                     if(p2=='P') msg="Scissors cuts paper.";
                }

                //Display the outputs
                cout<<"Rock Paper Scissors Game"<<endl;
                cout<<"Input Player 1 and Player 2 Choices"<<endl;
                cout<<msg<<endl;
                     }break;
            case '7':{
                cout<<endl<<"Savitch 9thEd Chap3 Prob3 Roman Conversion"<<endl<<endl;
                //Declare Variables
                unsigned char n1,//Number of 1's
                             n10,//Number of 10's
                            n100,//Number of 100's
                           n1000;//Number of 1000's
                unsigned short x;//4 digit number between 1000, 3000
                string msg;     //Message

                //Initialize or input i.e. set variable values
                cin>>x;
                msg="";

                //Map inputs -> outputs
                if(x<1000 || x>3000){
                    msg=" is Out of Range!";
                }else{
                    //Srtip off each digit
                    n1    = (x)%10;
                    n10   = (x/10)%10;
                    n100  = (x/100)%10;
                    n1000 = (x/1000);

                   //Code for outputting Roman Numerals in the 1000's
                   switch(n1000){
                       case 3:msg+="M";
                       case 2:msg+="M";
                       case 1:msg+="M";
                   };
                   //Code for outputting Roman Numerals in the 100's
                   msg += n100==9? "CM":
                          n100==8? "FCCC":
                          n100==7? "DCC":
                          n100==6? "DC":
                          n100==5? "D":
                          n100==4? "CD":
                          n100==3? "CCC":
                          n100==2? "CC":
                          n100==1? "C": "";

                   //Code for outputting Roman Numerals in the 10's
                   if(n10==9)msg+="XC";
                   if(n10==8)msg+="LXXX";
                   if(n10==7)msg+="LXX";
                   if(n10==6)msg+="LX";
                   if(n10==5)msg+="L";
                   if(n10==4)msg+="XL";
                   if(n10==3)msg+="XXX";
                   if(n10==2)msg+="XX";
                   if(n10==1)msg+="X";
                   //Code for outputting Roman Numerals in the 1's
                   if(n1==9)msg+="IX";
                   else if(n1==8)msg+="VIII";
                   else if(n1==7)msg+="VII";
                   else if(n1==6)msg+="VI";
                   else if(n1==5)msg+="V";
                   else if(n1==4)msg+="IV";
                   else if(n1==3)msg+="III";
                   else if(n1==2)msg+="II";
                   else if(n1==1)msg+="I";

                   //Add message wording
                   msg=" is equal to " + msg;
                }

                //Display the outputs
                cout<<"Arabic to Roman numeral conversion."<<endl;
                cout<<"Input the integer to convert."<<endl;
                cout<<x<<msg<<endl;
                     }break;
            case '8':{
                cout<<endl<<"Savitch 9thEd Chap3 PracProb4 Compatible Signs"<<endl<<endl;
                //Declare Variables
                string sign1, sign2, elemt1, elemt2;

                // Input signs
                cin>>sign1>>sign2;

                // Determine elements for each sign
                if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")  {
                    elemt1 = "Fire";
                } else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn") {
                    elemt1 = "Earth";
                } else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") {
                    elemt1 = "Air";
                } else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") {
                    elemt1 = "Water";
                }

                if (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius") {
                    elemt2 = "Fire";
                } else if (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn") {
                    elemt2 = "Earth";
                } else if (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius") {
                    elemt2 = "Air";
                } else if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces") {
                    elemt2 = "Water";
                } 

                //Display the outputs
                cout<<"Horoscope Program which examines compatible signs."<<endl;
                cout<<"Input 2 signs."<<endl;

                if (elemt1 == elemt2) {
                cout<<sign1<<" and "<<sign2<<" are compatible "<<elemt1<<" signs.";    
                } else {
                cout<<sign1<<" and "<<sign2<<" are not compatible signs."<<endl;    
                }
                     }break;
             default:cout<<endl<<"Exit Program"<<endl<<endl;
        }
    }while(option<=nOpshun);
    
    //Exit the Program
    return 0;
}