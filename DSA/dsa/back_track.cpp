#include <iostream>
#include <vector>

bool isSafe(const std::vector<std::string>& board, int row, int col, int n) {
    // Check if there's a queen in the current row
    for (int i = 0; i < col; ++i) {
        if (board[row][i] == 'Q') {
            return false;
        }
    }

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Check lower diagonal on left side
    for (int i = row, j = col; i < n && j >= 0; ++i, --j) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void solveNQueens(std::vector<std::vector<std::string> >& res, std::vector<std::string>& board, int col, int n) {
    if (col == n) {
        res.push_back(board);
        return;
    }

    for (int i = 0; i < n; ++i) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 'Q';
            solveNQueens(res, board, col + 1, n);
            board[i][col] = '.';
        }
    }
}

std::vector<std::vector<std::string> > solveNQueens(int n) {
    std::vector<std::vector<std::string> > res;
    std::vector<std::string> board(n, std::string(n, '.'));

    solveNQueens(res, board, 0, n);
    return res;
}

void printSolution(const std::vector<std::vector<std::string> >& res) {
    for (const auto& board : res) {
        for (const auto& row : board) {
            std::cout << row << std::endl;
        }
        std::cout << std::endl;
    }
}

int main() {
    int n = 4; // Change 'n' to solve for different board sizes
    std::vector<std::vector<std::string> > solutions = solveNQueens(n);

    std::cout << "Solutions for " << n << "-Queens Problem:\n";
    printSolution(solutions);

    return 0;
}
