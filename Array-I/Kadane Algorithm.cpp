class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            current+=nums[i];
            maxi=max(current,maxi);
            if(current<0)
            {
                current=0;
            }
        }
        return maxi;
    }
};