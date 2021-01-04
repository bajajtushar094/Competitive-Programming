class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n= stones.size();

        priority_queue <int> heavy;
        for(int i=0;i<n;i++)
        {
            heavy.push(stones[i]);
        }

        while(heavy.size()>1)
        {
            int x= heavy.top();
            heavy.pop();
            int y= heavy.top();
            heavy.pop();
            int remain = abs(x-y);
            if(remain!=0)
            {
                heavy.push(remain);
            }
        }

        return heavy.top();
    }
};
