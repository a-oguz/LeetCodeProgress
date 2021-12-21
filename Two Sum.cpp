class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_set<int> lookUp;
        int size = nums.size();
        int targetComplement;
        
        for(int i = 0; i < nums.size(); i++){
            targetComplement = target - nums[i];
            if(lookUp.find(targetComplement) == lookUp.end() ){
                lookUp.insert(nums[i]);
            }
            else{
                for(int j = 0; j < i; j++ ){
                    if(nums[j] == targetComplement){
                        result.push_back(j);
                    }
                }
                result.push_back(i);
            }
            
        }
        
        return result;
        
        
    }
};