class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int lastIndexOfZeros = size-1;
        while(lastIndexOfZeros >= 0){
            if(nums[lastIndexOfZeros] != 0){
                break;
            }
            lastIndexOfZeros--;
        }
        int iter = 0;
        while(iter < lastIndexOfZeros){
            if(nums[iter] == 0){
                nums.erase(nums.begin() + iter);
                nums.insert(nums.begin() + lastIndexOfZeros, 0);
                lastIndexOfZeros--;
            }
            else{
                iter++;
            }
        }
    }
};