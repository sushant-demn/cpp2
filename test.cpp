#include <iostream>
#include <vector>

const int N = 9;

// Function to print the Sudoku grid
void printGrid(const std::vector<std::vector<int>>& grid) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to check if a number can be placed in the specified cell
bool isSafe(const std::vector<std::vector<int>>& grid, int row, int col, int num) {
    // Check if the number exists in the current row or column
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num) {
            return false;
        }
    }

    // Check if the number exists in the current 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true; // The number can be placed
}

// Function to find an empty cell in the Sudoku grid
bool findEmptyCell(const std::vector<std::vector<int>>& grid, int& row, int& col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                return true; // Found an empty cell
            }
        }
    }
    return false; // No empty cell found
}

// Function to solve the Sudoku puzzle using backtracking
bool solveSudoku(std::vector<std::vector<int>>& grid) {
    int row, col;

    // Find an empty cell
    if (!findEmptyCell(grid, row, col)) {
        return true; // Puzzle solved
    }

    // Try placing numbers 1 through 9
    for (int num = 1; num <= N; num++) {
        if (isSafe(grid, row, col, num)) {
            // Place the number
            grid[row][col] = num;

            // Recur to solve the rest of the puzzle
            if (solveSudoku(grid)) {
                return true; // If a solution is found
            }

            // If placing the current number doesn't lead to a solution, backtrack
            grid[row][col] = 0;
        }
    }

    return false; // No solution found
}

int main() {
    std::vector<std::vector<int>> sudokuGrid(N, std::vector<int>(N, 0));

    std::cout << "Enter the Sudoku grid (0 for empty spaces):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> sudokuGrid[i][j];
        }
    }

    if (solveSudoku(sudokuGrid)) {
        std::cout << "Sudoku solved successfully:\n";
        printGrid(sudokuGrid);
    } else {
        std::cout << "No solution exists.\n";
    }

    return 0;
}




// static void chkemt(int b[9][9]) // checks for empty places at in the 3x3
// {   
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = 0; j < 9; j++)
//         {
//             int a = getQuadrant(i, j);
//             if (b[i][j] == 0)
//             {

//                 int col = i;
//                 int row = j;
//                 for (int i = 0; i <= 9; i++)
//                 {
//                     if (placevalid(b, col, row, i, (a / 3) * 3, (a % 3) * 3))
//                     {
//                         b[col][row] = i;
//                     }
//                 }
//                 print3x3(b, (a / 3) * 3, (a % 3) * 3);
//             }
//         };
//     }
// };