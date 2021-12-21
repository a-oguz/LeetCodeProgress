class Solution {
public:
    int myAtoi(string s) {
        int result=0;
        string newString = s;
        bool negative = false;
        int whitespaceIndex=-1;
        for(int i = 0; i < newString.size(); i++){
            if(newString[i] != ' '){
                whitespaceIndex = i;
                break;
            }
        }
        newString.erase(0, whitespaceIndex);
        
        if(newString[0] == '-'){
            negative = true;
            newString.erase(newString.begin());
        }
        else if(newString[0] == '+'){
            newString.erase(newString.begin());
        }
        if(!(newString[0] >= '0' && newString[0] <= '9')){
            return 0;
        }
        int lastdigitIndex = -1;
        for(int i = 0; i < newString.size(); i++){
            if(!(newString[i] >= '0' && newString[i] <= '9')){
                lastdigitIndex = i;
                break;
            }
        }
        if(lastdigitIndex != -1){
            newString.erase(newString.begin()+lastdigitIndex, newString.end());
        }
        
        try{
            for(int i = 0; i < newString.size(); i++){
                if(result > INT_MAX / 10 ){
                    throw exception();
                }
                else if(result == INT_MAX / 10 ){
                    result = (result * 10);
                    if(negative){
                        if((newString[i] - '0') >= ((INT_MIN%(-result))*-1)){
                            throw exception();
                        }
                    }
                    else{
                        if((newString[i] - '0') >= (INT_MAX%result)){
                            throw exception();
                        }
                    }
                    
                    result += (newString[i] - '0');
                }
                else{
                    result = (result * 10);
                    result += (newString[i] - '0');
                }
            }
            if(negative){
                result = result * (-1);
            }
        }
        catch(exception e){
            if(negative){
                result = INT_MIN;
            }
            else{
                result = INT_MAX;
            }
        }
        return result;
        
        
        
    }
};