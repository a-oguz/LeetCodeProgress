class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int temp1;
        int temp2;
        int temp3;
        int temp4;
        for(int layer = 0; layer < n/2; layer++ ){
            for(int rotateCount = 0; rotateCount < (n-(2 * layer)) -1; rotateCount++){
                temp1 = matrix[layer][(n-layer)-1];  // top right
                temp2 = matrix[(n-layer)-1][(n-layer)-1]; // bottom right
                temp3 = matrix[(n-layer)-1][layer];   // bottom left
                temp4 = matrix[layer][layer];          // top left

                //top
                for(int i = (n-layer)-1; i > layer; i--){ 
                    matrix[layer][i] = matrix[layer][i-1];
                }

                //right
                for(int i = (n-layer)-1; i > layer; i--){
                    matrix[i][(n-layer)-1] = matrix[i-1][(n-layer)-1];
                }
                matrix[layer + 1 ][(n-layer)-1] = temp1; 

                //bottom
                for(int i = layer; i < (n-layer)-1; i++ ){
                    matrix[(n-layer)-1][i] = matrix[(n-layer)-1][i+1];
                }
                matrix[(n-layer)-1][(n-layer)-2] = temp2; 

                //left
                for(int i = layer; i < (n-layer) - 1; i++ ){
                    matrix[i][layer] = matrix[i+1][layer];
                }
                matrix[(n-layer)-2][layer] = temp3; 

                matrix[layer][layer +1] = temp4; 
            }
            
        }
        
    }
};