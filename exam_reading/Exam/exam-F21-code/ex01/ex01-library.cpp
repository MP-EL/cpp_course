#include <iostream>
#include "ex01-library.h"
#include <cmath>

using namespace std;

// Task 1(a).  Implement this function
Square **createChessboard(unsigned int n) {
    Square **A = new Square*[n];
    for(int s = 0; s < n; s++)
    {
        A[s] = new Square[n];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            A[i][j].piece = none;
            A[i][j].team = nobody;
        }
    }
    return A;
}

// Task 1(b).  Implement this function
void displayChessboard(Square **c, unsigned int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(c[i][j].piece == rook && c[i][j].team == white){
                cout << "r ";
            }
            else if(c[i][j].piece == bishop && c[i][j].team == white){
                cout << "b ";
            }
            else if(c[i][j].piece == bishop && c[i][j].team == black){
                cout << "B ";
            }
            else if(c[i][j].piece == rook && c[i][j].team == black){
                cout << "R ";
            }
            else{
                cout << "_ "; 
            }
        }
        cout << endl;
    }
}

// Task 1(c).  Implement this function
bool move(Square **c, unsigned int n, int r1, int c1, int r2, int c2) {

    if(c[r1][c1].team == c[r2][c2].team){
        return false;
    }
    else if(c[r1][c1].piece == bishop){ // Bishop moving
        if(abs(r1 - c1) != abs(r2 - c2)){
            return false;
        }
        else{
            c[r2][c2].piece = bishop;
            c[r2][c2].team = c[r1][c1].team;
            c[r1][c1].piece = none;
            c[r1][c1].team = nobody;
        }
    }
    else if(c[r1][c1].piece == rook){
        if(r1 == r2 || c1 == c2){
            c[r2][c2].piece = rook;
            c[r2][c2].team = c[r1][c1].team;
            c[r1][c1].piece = none;
            c[r1][c1].team = nobody;
        }
        else{
            return false;
        }
    }
    return c;
}

// Task 1(d).  Implement this function
bool threatened(Square **c, unsigned int n, int row, int col) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(c[i][j].team != c[row][col].team){
                if(c[i][j].piece == bishop){
                    if(abs(i - j) == abs(row - col)){
                        return true;
                    }
                }
                if(c[i][j].piece == rook){
                    if(i == row || j == col){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

// Do not modify
void deleteChessboard(Square **c, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        delete[] c[i];
    }
    delete[] c;
}
