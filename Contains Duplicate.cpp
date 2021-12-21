class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> checked;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(checked.find(nums[i]) == checked.end()){
                checked.insert(nums[i]);
            }
            else{
                return true;
            }
        }
        return false;        
    }
};