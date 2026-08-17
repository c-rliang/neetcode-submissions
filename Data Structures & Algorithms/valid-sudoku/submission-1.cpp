class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // three sets. one for boxes, one for rows, one for cols

        // col: {col #, val}
        // row: {row #, val}
        // box: {box #, val}

        // if same key alr exists then return false

        set<pair<int, char>> cols;
        set<pair<int, char>> rows;
        set<pair<pair<int, int>, char>> subBoxes;



        for(int row = 0; row < 9; row++) {
            for(int col = 0; col < 9; col++) {
                char currChar = board[row][col];

                if(currChar == '.') {
                    continue;
                }

                if(cols.contains({col, currChar}) || 
                rows.contains({row, currChar}) ||
                subBoxes.contains({{row / 3, col / 3}, currChar})) {
                    return false;
                }
                else {
                    cols.insert({col, currChar});
                    rows.insert({row, currChar});
                    subBoxes.insert({{row / 3, col / 3}, currChar});
                }
            }
        }

        return true; 
    }
};
