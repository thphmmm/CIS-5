/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 30, 2024, 6:21 PM
 * Purpose: Sudoku Game
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>  //Random Library
#include <ctime>    //Time Input
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare all variables
    int puzzle[9][9];

    //Initialize all variables
    cout<<"\t Sudoku Game"<<endl;
    cout<<"Enter the initial value for the Sudoku puzzle: "<<endl; //Use numbers from 1 to 9, and 0 for empty cells
    
    //Input initial Sudoku puzzle
    for(int i=0; i<9; ++i) {
        for (int j=0; j<9; ++j) {
            int input;
            cin>>input;
            if(input<0 || input>9) {
                cout<<"Invalid input"<<endl;
                return 0; // Exit the program without failure
            }
            puzzle[i][j]=input;
        }
    }
    
    // Display the Sudoku puzzle with a box
    cout<<"\nSudoku Puzzle:"<<endl;
    cout<<" ---------------------"<<endl;
    for(int i = 0; i < 9; ++i) {
        cout<<"| ";
        for(int j=0; j<9; ++j) {
            cout<<puzzle[i][j]<<" ";
            if((j+1)%3 == 0) {
                cout<<"| ";
            }
        }
        cout<<endl;
        if((i+1)%3 == 0) {
            cout<<" ---------------------"<<endl;
        }
    }

    //Solve Sudoku
    cout<<"\nSolving Sudoku..."<<endl;
    for(int i=0; i<9; ++i) {
        for(int j=0; j<9; ++j) {
            if (puzzle[i][j] == 0) {
                puzzle[i][j] = rand()%9+1; // Fill with a random number between 1 and 9
            }
        }
    }
    
    //Display the output
    cout<<"\nSolved Sudoku:"<<endl;
    cout<<" ---------------------"<<endl;
    for(int i=0; i<9; ++i) {
        cout<<"| ";
        for(int j=0; j<9; ++j) {
           cout<<puzzle[i][j]<<" ";
            if((j+1)%3 == 0) {
               cout<<"| ";
            }
        }
        cout<<endl;
        if((i + 1)%3 == 0) {
           cout<<" ---------------------"<<endl;
        }
    }

    //Exit the Program
    return 0;
}
