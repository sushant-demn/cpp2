#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// take grid as input

// check if the board is already solved. if yes

 //-> print the solved board.

 //-> else place a number in a safe cell and check again.

static void takematrix(int grid[9][9]){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin>>grid[i][j];
		}
	} //take grid as input.
}

static void printmatrix(int grid[9][9]){
	cout<<"\n";
	for(int i=0;i<9;i++){ 
        for(int j=0;j<9;j++){ 
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

static bool isSafe(int grid[9][9], int row, int col, int num){
	// search linearly in row AND col
	for(int i=0;i<9;i++){
		if(grid[i][col] == num || grid[row][i] == num){
			return false;
		}
	}
	// search in its "square" 
	int root = (int)sqrt(9);
	int startInRow = row - row%root;
	int startInCol = col - col%root;
	// search in this square;
	for(int i=startInRow;i<startInRow+root;i++){
		for(int j=startInCol;j<startInCol+root;j++){
			if(grid[i][j] == num){
				return false;
			}
		}
	}
	return true; // just return true;
}


static bool isSolved(int grid[9][9]){
	int row=-1; int col=-1;
	bool isEmpty = false;
	// Search in the entire grid for the empty cell...
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(grid[i][j] == 0){
				row = i;
				col = j;
				isEmpty = true;
			}
		}
		if(!isEmpty){
			//isEmpty = false;
			return true;
		}
	}
	if(isEmpty){
		isEmpty = false;
	}
	// place the number num (1<=num<=9) found at the empty cell. at (row, col)
	for(int num=1;num<=9;num++){
		if(isSafe(grid, row, col, num)){
			grid[row][col] = num;
			if(isSolved(grid)){ // backtracking for every number [1,9].
				return true;
			}
		}
		else{
			grid[row][col] = 0;
		}
	}
	return false;
}

static void SolveSudoku(int grid[9][9]){
	if(isSolved(grid)){
		printmatrix(grid);
	}
	else{
		cout<<"No solution exists"<<endl;
	}

}


int main(){

	cout<<"Enter the entire sudoku grid 9x9, where empty cells are '0'"<<endl;
	int grid[9][9];
	takematrix(grid);

	time_t start, end;
	
	time(&start);

	SolveSudoku(grid);

	time(&end);
	cout<<"Time taken: "<<(double)(end-start)<<endl;
	//printmatrix(grid);

	return 0;
}
