class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int capacity = nums.size();
        int len = nums.size();
        int iter = 0;
        
        while(iter < len-1){
            if(nums[iter] == nums[iter+1]){
                int diff = 1;
                while((iter+diff+1 < len)&&(nums[iter] == nums[iter+diff+1])){
                    diff++;
                }
                int index = iter+1; 
                while( (index+diff < len) && (index+diff < len) ){
                    nums[index] = nums[index+diff];
                    index++;
                }
                len -= diff;
            }
            iter++;
        }
        return len;
    }
};