#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void print3x3(int b[9][9], int a, int c)
{

    for (size_t i = 0 + a; i < 3 + a; i++)
    {  
        for (size_t j = 0 + c; j < 3 + c; j++)
        { 
            cout << b[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
}
bool solved(int b[9][9]) 
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (b[i][j] == 0)
            {
                return false;
            }
        }
    }
    return true;
}
static void input(int b[9][9])
{
    for (size_t row = 0; row < 9; row++) // TaKing a sudoku as a 9x9 matrix where 0 denotes empty spaces
    {
        for (size_t col = 0; col < 9; col++)
        {
            cin >> b[row][col];
        };
    };
}
void print(int b[9][9])
{
    for (size_t row = 0; row < 9; row++) // TaKing a sudoku as a 9x9 matrix where 0 denotes empty spaces
    {
        for (size_t col = 0; col < 9; col++)
        {
            cout << b[row][col] << " ";
        };
        cout << "\n";
    };
    cout << "\n";
}

static bool placevalid(int b[9][9], int col, int row, int num, int x, int y)
{
    for (int i = 0; i < 9; i++) // checks if the place is valid to place a number
    {
        if (b[col][i] == num || b[i][row] == num)
        {
            // cout << "dont\n";
            return false;
        }
    }

    for (int i = 0 + x; i < 3 + x; i++) // check if the num belongs to its 3x3 matrix
    {
        for (int j = 0 + y; j < 3 + y; j++)
        {
            if (b[i][j] == num)
            {

                return false;
            }
        }
    }
    return true;
}
int getQuadrant(int row, int col) // i have divided 9x9 into 9 3x3's so giving it quadrants from 0 to 8
{
    return (row / 3) * 3 + (col / 3); // this give quadrants on the basis of the coordinates
}
void backtrace(int b[9][9], int a)
{
    int x = (a / 3) * 3;
    int y = (a % 3) * 3;
    for (int i = 0 + x; i < 3 + x; i++)
    {
        for (int j = 0 + y; j < 3 + y; j++)
        {
            if (b[i][j] == 0)
            {
                cout << "empty spaces found still at " << i << " " << j << "\n";
            }
        }
    }
}
static void chkemt(int b[9][9]) // checks for empty places at in the 3x3
{
    for (int k = 0; k < 9; k++)
    {   
        int x = (k / 3) * 3;
        int y = (k%3)*3;
        for (int i = 0 + x ; i < 3 + x; i++)
    {
        for (int j = 0 + y; j < 3+y; j++)
        {
            int a = getQuadrant(i, j);
            if (b[i][j] == 0)
            {

                int col = i;
                int row = j;
                for (int i = 0; i <= 9; i++)
                {
                    if (placevalid(b, col, row, i, (a / 3) * 3, (a % 3) * 3))
                    {
                        b[col][row] = i;
                    }
                }
                print3x3(b, (a / 3) * 3, (a % 3) * 3);
            }
        };
    } 
    }
    
   
};
/*
0 3 0 | 8 0 0 | 0 0 0
0 0 9 | 0 2 0 | 3 0 0
8 0 0 | 0 0 1 | 0 0 0
------+-------+------
0 6 0 | 9 0 3 | 0 0 0
0 5 0 | 0 0 0 | 0 4 0
0 0 0 | 4 0 6 | 0 8 0
------+-------+------
0 0 0 | 2 0 0 | 0 0 7
0 0 5 | 0 8 0 | 6 0 0
0 0 0 | 0 0 7 | 0 1 0


7 3 6  8 9 5  4 2 1
5 4 9  7 2 0  3 6 8
8 2 0  6 4 1  9 7 5

4 6 8  9 7 3  5 0 2
9 5 7  1 0 8  0 4 6
3 1 2  4 5 6  7 8 9

6 9 4  2 3 0  8 5 7
2 7 5  0 8 9  6 3 4
0 8 3  5 6 7  2 1 0
*/
int main()
{

    int arr[9][9];
    input(arr);
    cout << "\n\n\n\n";
    chkemt(arr);
    print(arr);

    return 0;
}

/*
sudoku done till now
1. takes 9x9 matrix of arrays as a sudoku template where 0's are empty spaces
2. made a function which checks for empty spaces for 1st 3x3 sqr matrix
3. made a fucntion which checks for valid nums that can be placed at that point by checking if same num placed in its row and col
4.intergrated 3 in 4
5.made a function which prints the solved matrix



*/