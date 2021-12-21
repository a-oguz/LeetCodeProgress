class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> map;
        int size = s.size();
        for(int i = 0; i < size; i++){
            if( map.find(s[i]) != map.end()){
                map[s[i]] = map[s[i]] + 1;
            }
            else{
                map[s[i]] = 1;
            }
        }
        for(int i = 0; i < size; i++){
            if( map.find(t[i]) != map.end()){
                map[t[i]] = map[t[i]] - 1;
                if(map[t[i]] < 0){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};