class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int iter1=0;
        int iter2 = 0;
        int size1 = m+n;
        int size2 = n;
        while( size1 > iter1 && size2 > iter2){
            if(nums1[iter1] > nums2[iter2]){
                nums1.insert(nums1.begin() + iter1, nums2[iter2]);
                nums1.pop_back();
                iter2++;
            }
            if(nums1[iter1] == 0 && iter1 >= m+iter2){
                nums1.insert(nums1.begin() + iter1, nums2[iter2]);
                nums1.pop_back();
                iter2++;
            }
            else{
                iter1++;
            }
        }
        return;
        
    }
};