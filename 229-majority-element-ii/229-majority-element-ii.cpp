class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> maj;
        int ele1 = -1,ele2 = -1,count1 = 0,count2 = 0;

        for(auto it:nums){
            if(it == ele1)count1++;
            else if(it == ele2) count2++;
            else if(count1 == 0){
                ele1 = it;
                count1 = 1;
            }
            else if(count2 == 0){
                ele2 = it;
                count2 = 1;
            }else{
                count1--;
                count2--;
            }
            
        }
         count1 = 0;
        count2 = 0;
        for(auto it :nums){
            if(ele1 == it){
                count1++;
            }else if(ele2 == it){
                count2++;
            }
        }
        int n = nums.size();
        if(count1>n/3) maj.push_back(ele1);
        if(count2>n/3) maj.push_back(ele2);
        
        return maj;
    }
};