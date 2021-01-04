class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();

        int rotate;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]<num[i])
                rotate=i;
        }


        vector<int> tar;
        if((nums[0]<=target)&&(nums[i]>=target))
        copy(nums.begin(),nums.begin()+i,targ.begin());
        else if((nums[i+1]<=target)&&(nums[n-1]>=target))
        copy(nums.begin()+i,nums.end(),tar.begin());

        int l=0;
        int r=tar.size()-1;

        while(r>=l)
        {
            int mid=l+(r-l)/2;

            if(tar[mid]==target)
                return mid;
            else if(tar[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }

        return -1;

    }
};
