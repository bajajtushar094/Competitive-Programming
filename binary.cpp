class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int l=nums[0];
        int r = nums[n-1];

        while(r<l)
        {
            mid=l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                r=mid-1;
            else
                r=mid+1;
        }

        return -1;
    }
};
