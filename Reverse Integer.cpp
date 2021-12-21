class Solution {
public:
    int reverse(int x) {
        if(x / 10 == 0)
            return x;
        string s = to_string(x);
        bool negative = false;
        if(s[0] == '-'){
            negative = true;
        }
        if(negative){
            s.erase(s.begin());
        }        
        int size = s.size();
        char temp;
        for(int i = 0; i < size/2 ; i++){
            temp = s[i];
            s[i] = s[(size-i)-1];
            s[(size-i)-1] = temp;
        }
        if(negative){
            s.insert(s.begin(), '-');
        }
        
        int result = 0;
        //Overflow check
        try{
            result = stoi(s);
        }
        catch(exception e){
            result = 0;
        }
        
        return result;
    }
};