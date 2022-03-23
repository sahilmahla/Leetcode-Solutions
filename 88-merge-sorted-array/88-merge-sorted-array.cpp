class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  
        int nums1Index = m - 1;
        int nums2Index = n - 1;
        int resultIndex = m + n - 1;
        
        while (nums1Index >= 0 && nums2Index >= 0) {
            nums1[resultIndex--] = (nums1[nums1Index] > nums2[nums2Index]) ? nums1[nums1Index--]: nums2[nums2Index--];
        }
        
        while (nums2Index >= 0) {
            nums1[resultIndex--] = nums2[nums2Index--];
        }
    }
};