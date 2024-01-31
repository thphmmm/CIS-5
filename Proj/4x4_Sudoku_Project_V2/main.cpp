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

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));

    // Declare all variables
    int puzzle[4][4] = {{3, 0, 0, 0},
                        {0, 0, 2, 0},
                        {0, 0, 0, 3},
                        {0, 2, 0, 0}};
    
    //Initialize all variables
    cout << "Sudoku Puzzle:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << puzzle[i][j] << " ";
        }
        cout << endl;
    }

    //Process or Map solutions
    
    //Display the output
    
    //Exit the Program
    return 0;
}

