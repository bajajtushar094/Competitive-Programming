class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        maps <int,int> map;
        for(int i=0;i<n;i++)
        {
            if(map.find(nums[i])==num.end())
                map[nums[i]]=1;
            else
                map[nums[i]]++;
        }
        for(auto i=map.begin();i!=map.end();i++)
        {
            if((i->second)==1)
                return i->first;
        }
    }
};
