class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n= strs.size();
        vector<string> another = strs;
        map<string,vector<string>> list;
        for(int i=0;i<n;i++)
        {
            sort(another[i].begin(),another[i].end());
            list[another[i]].push(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it = list.begin();it!=list.end();it++)
        {
            ans.push(it->second);
        }
        return ans;
    }
};
