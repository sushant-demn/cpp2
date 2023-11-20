#include <iostream>
using namespace std;
void chk(void){
    int a[18];

        
    }
int main()
{
    int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[9][9];

    for (size_t row = 0; row < 9; row++) // TaKing a sudoku as a 9x9 matrix where 0 denotes empty spaces
    {
        for (size_t col = 0; col < 9; col++)
        {
            cin >> arr[row][col];
        };
    };
    cout << "\n\n\n";

for (int i = 0; i < 3; i++) //check for empty spaces in the sudoku
{
    for (int j = 0; j < 3; j++)
    {
        if (arr[i][j] == 0)
        {
            
        }
        
    }
    
}

    

    return 0;
}