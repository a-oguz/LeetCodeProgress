class Solution {
public:
    int strStr(string haystack, string needle) {
        int nSize = needle.size();
        int hSize = haystack.size();
        if(nSize == 0){
            return 0;
        }
        if(nSize > hSize){
            return -1;
        }
        if(nSize == hSize){
            if(haystack.compare(needle) == 0){
                return 0;
            }
            else{
                return -1;
            }
        }
        int pos = -1;
        bool found = false;
        for(int i = 0; i < (hSize-nSize)+1; i++ ){
            if(haystack[i] == needle[0]){
                for(int j = 0; j < nSize; j++){
                    if(haystack[i+j] != needle[j]){
                        found = false;
                        break;
                    }
                    found = true;
                }
                if(found){
                    pos = i;
                    break;
                }
                
            }
        }
        return pos;
        
    }
};