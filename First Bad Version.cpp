// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int max = n;
        int min = 1;
        int testIndex;
        bool result = false;
        if(isBadVersion(1)){
            return 1;
        }
        if(!isBadVersion(n-1)){
            return n;
        }
        while(true){
            testIndex = ((long)min+(long)max) / 2;
            result = isBadVersion(testIndex);
            if(result){
                max = testIndex;
            }
            else{
                min = testIndex;
            }
            
            if( min+1 == max){
                return max;
            }
        }
    }
};