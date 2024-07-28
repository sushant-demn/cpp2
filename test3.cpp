#include <iostream>
#include <vector>
#include <string>

// Function to read the matrix from input
std::vector<std::vector<int>> readMatrix(int rows, int cols) {
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        std::string line;
        std::cin >> line;
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = line[j] - '0';  // Convert char '0' or '1' to int 0 or 1
        }
    }
    return matrix;
}

// Function to print the matrix
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main() {
    int rows = 6;  // Number of rows in the matrix
    int cols = 6;  // Number of columns in the matrix

    std::cout << "Enter the matrix:\n";
    std::vector<std::vector<int>> matrix = readMatrix(rows, cols);

    std::cout << "Matrix:\n";
    printMatrix(matrix);

    return 0;
}
