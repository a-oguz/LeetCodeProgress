class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> lookup;
        vector<int> lookup_count;
        int size = s.size();
        
        bool found = false;
        for(int i = 0; i < size; i++){
            found = false;
            for(int j = 0; j < lookup.size(); j++){
                if(s[i] == lookup[j]){
                    lookup_count[j]++;
                    found = true;
                    break;
                }
            }
            if(!found){
                lookup.push_back(s[i]);
                lookup_count.push_back(1);
            }
        }
        int retPos = -1;
        int retChar;
        bool retFound = false;
        for(int i = 0; i < lookup_count.size(); i++){
            if(lookup_count[i] == 1){
                retChar = lookup[i];
                retFound = true;
                break;
            }   
        }
        if(retFound){
            for(int i = 0; i < size; i++){
                if(s[i] == retChar){
                    retPos = i;
                    break;
                }
            }
        }
        
        return retPos;
    }
};