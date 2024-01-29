/*
/* 
 * File:   main.cpp
 * Author: Thu Pham
 * Created on January 27, 2024, 8:13 PM
 * Purpose: 4x4 Sudoku Game
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>  //Random Library
#include <ctime>    //Time Input
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
void prntBrd(int board[4][4]);  //Print Board
bool valid(int board[4][4], int row, int col, int num); //Valid Number
bool EmpLctn(int board[4][4], int& row, int& col);  //Empty Location on Board
bool solve(int board[4][4]);    //Solve Sudoku Game

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all variables
    int board[4][4] = {{0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0}};
    
    //Initialize all variables
    cout<<"Sudoku Puzzle:"<<endl;
    prntBrd(board);
    cout<<endl;
    
    if(solve(board)) {
       cout<<"Solved Sudoku:"<<endl;
       prntBrd(board);
    } else {
       cout<<"No solution exists."<< endl;
    }

    //Process or Map solutions
    
    //Display the output
    
    //Exit the Program
    return 0;
}

