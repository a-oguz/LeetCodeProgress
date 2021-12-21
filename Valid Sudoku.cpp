class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //rows
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                for(int k = j+1 ; k < 9; k++){
                    if(board[i][j] == board[i][k] && board[i][j] != '.')
                        return false;
                }
            }
        }
        //cols 
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                for(int k = j+1 ; k < 9; k++){
                    if(board[j][i] == board[k][i] && board[j][i] != '.')
                        return false;
                }
            }
        }
        
        //3x3 checks
        unordered_set<char> miniBoard;
        int tempx, tempy;
        char tempVal;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0 ; k < 3; k++){
                    for(int l = 0; l < 3; l++ ){
                        tempx = (i*3) + k;
                        tempy = (j*3) + l;
                        tempVal = board[tempx][tempy];
                        if(tempVal != '.' ){
                            if(miniBoard.find(tempVal) != miniBoard.end()){
                                return false;
                            }
                            else{
                                miniBoard.insert(tempVal);
                            }
                        } 
                    }
                }
                miniBoard.clear();
            }
        }
        
        return true;
        
    }
};