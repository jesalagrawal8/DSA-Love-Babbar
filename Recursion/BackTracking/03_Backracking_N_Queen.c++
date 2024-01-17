#include<bits/stdc++.h>
using namespace std;

void printSolution(vector<vector<int>> &board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout <<endl;
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n) {
    // Check if there is a queen in the same row
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1) {
            return false;
        }
    }

    // Check upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Check lower left diagonal
    for (int i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // If no conflicts, the position is safe
    return true;
}

void solve(vector<vector<int>> &board, int col, int n) {
    // Base case
    if (col >= n) {
        printSolution(board, n);
        return;
    }

    // Try placing queen in each row of the current column
    for (int row = 0; row < n; row++) {
        if (isSafe(row, col, board, n)) {
            // Place the queen
            board[row][col] = 1;

            // Recur for the next column
            solve(board, col + 1, n);

            // Backtrack
            board[row][col] = 0;
        }
    }
}

int main() {
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    int col = 0;
    solve(board, col, n);
    return 0;
}
