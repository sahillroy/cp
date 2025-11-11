#include <bits/stdc++.h>
using namespace std;

bool searchNext(vector<vector<char>>& board, string& word, int row, int col, int index, int m, int n) {
    // Base case: entire word found
    if (index == word.length()) {
        return true;
    }

    // Boundary and mismatch checks
    if (row < 0 || col < 0 || row >= m || col >= n || board[row][col] != word[index]) {
        return false;
    }

    // Mark current cell as visited
    char c = board[row][col];
    board[row][col] = '!';

    // Move in all four directions
    bool found = searchNext(board, word, row - 1, col, index + 1, m, n) ||
                 searchNext(board, word, row + 1, col, index + 1, m, n) ||
                 searchNext(board, word, row, col - 1, index + 1, m, n) ||
                 searchNext(board, word, row, col + 1, index + 1, m, n);

    // Backtrack — reset cell
    board[row][col] = c;

    return found;
}

bool exist(vector<vector<char>>& board, string word) {
    int m = board.size();
    int n = board[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == word[0]) {
                if (searchNext(board, word, i, j, 0, m, n)) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    
    string word = "ABCCED";

    bool res = exist(board, word);
    if (res)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}

/*
SUMMARY:
This program checks whether a given word exists in a 2D character grid.
It uses recursion and backtracking to search for the word by moving
up, down, left, or right from each matching character.

1. The 'exist()' function scans the grid and starts a recursive search
   from every cell that matches the first letter of the word.

2. The 'searchNext()' function performs the recursive DFS search:
   - It checks boundaries and matches the current character.
   - Marks the current cell as visited ('!') to avoid reuse.
   - Recursively explores all 4 possible directions.
   - Backtracks by restoring the cell after exploring.

3. If all characters of the word are matched in sequence, it returns true.
   Otherwise, after exploring all paths, it returns false.

This approach ensures that each path is explored without revisiting
the same cell, making it a classic example of recursion with backtracking.
*/
