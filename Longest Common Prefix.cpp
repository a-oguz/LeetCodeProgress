class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int arrCount = strs.size();
        string result;
        bool found = false;
        for(int i = 0; i < strs[0].size(); i++){
            for(int j = 0; j < (arrCount -1); j++){
                if(i >= strs[j].size() || i >= strs[j+1].size()){
                    found = true;
                    break;
                }
                if(strs[j][i] != strs[j+1][i]){
                    found = true;
                    break;
                }
            }
            if(found){
               break; 
            }
            else{
                result.push_back(strs[0][i]);
            }
        }
        
        if(result.empty()){
            result = "";
        }
        
        return result;
        
    }
};