class Solution {
public:
    bool isPalindrome(string s) {
        string newString;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                newString.push_back(tolower(s[i]));
            }
        }
        int size = newString.size();
        for(int i = 0; i < size/2; i++){
            if(newString[i] != newString[(size-i)-1]){
                return false;
            }
        }
        return true;
        
    }
};