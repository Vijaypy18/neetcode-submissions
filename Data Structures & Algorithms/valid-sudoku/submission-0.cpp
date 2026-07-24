class Solution {
public:
    bool evaluate(vector<vector<char>>& board, int sr, int sc, int er, int ec) {
        set<char> st;
        for (int i = sr; i < er; i++) {
            for (int j = sc; j < ec; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (st.find(board[i][j]) != st.end()) {
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        // Check rows
        for (int i = 0; i < 9; i++) {
            set<char> st;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (st.find(board[i][j]) != st.end()) {
                    return false;
                }
                st.insert(board[i][j]);
            }
        }

        // Check columns
        for (int i = 0; i < 9; i++) {
            set<char> st;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') {
                    continue;
                }
                if (st.find(board[j][i]) != st.end()) {
                    return false;
                }
                st.insert(board[j][i]);
            }
        }

        // Check 3x3 subgrids using evaluate()
        for (int sr = 0; sr < 9; sr += 3) {
            for (int sc = 0; sc < 9; sc += 3) {
                int er = sr + 3;
                int ec = sc + 3;
                if (!evaluate(board, sr, sc, er, ec)) return false;
            }
        }

        return true;
    }
};
