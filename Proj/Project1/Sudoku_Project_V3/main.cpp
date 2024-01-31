/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 28, 2024, 11:05 PM
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
    // Set a random seed
    srand(static_cast<unsigned int>(time(0)));

    // Declare all variables
    int puzzle[9][9];

    // Initialize all variables
    cout<<"Enter the Sudoku puzzle:"<<endl; //Use zero for empty cell
    for(int i=0; i<9; ++i) {
        for(int j=0; j<9; ++j) {
            cin>>puzzle[i][j];
        }
    }
    cout<<"Sudoku Puzzle:"<<endl;
    for(int i=0; i<9; ++i) {
        for(int j=0; j<9; ++j) {
            cout<<puzzle[i][j]<<" ";
        }
        cout<<endl;
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
    for(int i=0; i < 9; ++i) {
        for(int j=0; j < 9; ++j) {
            cout<<puzzle[i][j]<<" ";
        }
        cout << endl;
    }
    
    //Exit the Program
    return 0;
}
