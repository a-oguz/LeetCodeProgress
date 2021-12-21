class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        else{
            string prevString = countAndSay(n-1);
            string newString;
            vector<char> chars;
            vector<int> counts;
            int charsIndex = 0;
            
            chars.push_back(prevString[0]);
            counts.push_back(1);
            
            for(int i = 1; i < prevString.size(); i++){
                if(chars[charsIndex] == prevString[i]){
                    counts[charsIndex]++;    
                }
                else{
                    chars.push_back(prevString[i]);
                    counts.push_back(1);
                    charsIndex++;
                }
            }
            for(int i = 0; i < chars.size(); i++){
                newString.append(to_string(counts[i]));
                newString.push_back(chars[i]);
            }
            
            return newString;
            
        }
    }
};