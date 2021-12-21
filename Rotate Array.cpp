class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();  
        int rotateCount = k % size;
        
        int* holder = new int[rotateCount];
        
        int index = size - rotateCount;
        for(int i = 0; i < rotateCount; i++){
            holder[i] = nums[index+i];
        }
        
        for(int i = index - 1; i >= 0; i--){
            nums[i + rotateCount] = nums[i];
        }
        
        for(int i = 0; i < rotateCount ; i++){
            nums[i] = holder[i];
        }
        
        delete [] holder;
        
    }
};