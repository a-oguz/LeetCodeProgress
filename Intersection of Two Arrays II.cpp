class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        vector<int> temp1 = nums1;
        vector<int> temp2 = nums2;
        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());
        int iter1 = 0;
        int iter2 = 0;
        while(iter1 < temp1.size() && iter2 < temp2.size()){
            if(temp1[iter1] > temp2[iter2]){
                iter2++;
            }
            else if(temp1[iter1] == temp2[iter2]){
                result.push_back(temp1[iter1]);
                temp1.erase(temp1.begin() + iter1);
                temp2.erase(temp2.begin() + iter2);
            }
            else{
                iter1++;
            }
        }
        return result;
        
    }
};