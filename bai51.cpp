class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> results;
        vector<string> board(n, string(n, '.'));
        
        // Trackers for constraints
        vector<bool> cols(n, false);
        vector<bool> posDiag(2 * n, false); // row + col
        vector<bool> negDiag(2 * n, false); // row - col + n (offset to avoid negative)
        
        backtrack(0, n, board, results, cols, posDiag, negDiag);
        return results;
    }

private:
    void backtrack(int row, int n, vector<string>& board, vector<vector<string>>& results,
                   vector<bool>& cols, vector<bool>& posDiag, vector<bool>& negDiag) {
        // Base case: If we've placed queens in all rows, save the board
        if (row == n) {
            results.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            // Check constraints
            if (cols[col] || posDiag[row + col] || negDiag[row - col + n]) {
                continue;
            }

            // Place queen
            board[row][col] = 'Q';
            cols[col] = posDiag[row + col] = negDiag[row - col + n] = true;

            // Recurse to the next row
            backtrack(row + 1, n, board, results, cols, posDiag, negDiag);

            // Backtrack: Remove queen and reset trackers
            board[row][col] = '.';
            cols[col] = posDiag[row + col] = negDiag[row - col + n] = false;
        }
    }
};