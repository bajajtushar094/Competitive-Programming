class Solution {
public:

    int square(int n)
    {
        int ans=0;

        for(int i=n;i>0;i=i/10)
        {
            ans+=(i%10)*(i/10);
        }

        return ans;
    }

    int singleNumber(vector<int>& nums) {
        int n = nums.size();


        while(1)
        {
            if(n==1)
                return true;
            else if(n==0)
                return false;
            else
                n=square(n);
        }

        return false;
    }
};
