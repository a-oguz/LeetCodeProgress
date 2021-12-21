class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> newDigits = digits;
        int size = digits.size();
        bool carry = true;
        int currentDigitIndex = size-1;
        int currentDigit = digits[size-1] + 1;
        
        while(carry && currentDigitIndex >= 0){
            currentDigit = digits[currentDigitIndex] + 1;
            if(currentDigit/10 == 1){
                carry = true;
                currentDigit %= 10;
                newDigits[currentDigitIndex] = currentDigit;
                currentDigitIndex--;
            }
            else{
                carry= false;
                newDigits[currentDigitIndex] = currentDigit;
            }
        }
        if(carry && currentDigitIndex < 0){
            newDigits.insert(newDigits.begin(),1);
        }
        return newDigits;
    }
};