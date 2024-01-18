//4&5 ale lec me leetcode pe solve krwaya tha

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int value, int board[][9], int curr_row, int curr_col) {
    // Row check
    for (int col = 0; col < 9; col++) {
        if (board[curr_row][col] == value) {
            return false;
        }
    }
    // Column check
    for (int row = 0; row < 9; row++) {
        if (board[row][curr_col] == value) {
            return false;
        }
    }
    // 3x3 grid check
    for (int i = 0; i < 9; i++) {
        if (board[3 * (curr_row / 3) + (i / 3)][3 * (curr_col / 3) + (i % 3)] == value) {
            return false;
        }
    }
    return true;
}

bool solve(int board[9][9], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Check for empty cell
            if (board[i][j] == 0) {
                for (int value = 1; value <= 9; value++) {
                    // Check for safety
                    if (isSafe(value, board, i, j)) {
                        // Insert
                        board[i][j] = value;
                        // By recursion, it will handle the next steps
                        if (solve(board, n)) {
                            return true;
                        }
                        // Backtracking
                        board[i][j] = 0;
                    }
                }
                // No value in 1-9 worked for this cell, backtrack to the previous state
                return false;
            }
        }
    }
    return true;  // All cells are filled
}

int main() {
    // 0 represents an empty cell
    int board[9][9] = {
        {4, 5, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 2, 0, 7, 0, 6, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 2, 8},
        {0, 0, 0, 9, 5, 0, 0, 0, 0},
        {0, 8, 6, 0, 0, 0, 2, 0, 0},
        {0, 2, 0, 6, 0, 0, 7, 5, 0},
        {0, 0, 0, 0, 0, 0, 4, 7, 6},
        {0, 7, 0, 0, 4, 5, 0, 0, 0},
        {0, 0, 8, 0, 0, 9, 0, 0, 0},
    };
    int n = 9;

    if (solve(board, n)) {
        // Print the solution
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
