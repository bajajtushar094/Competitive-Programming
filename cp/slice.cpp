vector<int> Solution::dNums(vector<int> &A, int B) {
    int n= A.size();
    vector <int> ans;
    for(int i=0;i<n-B+1;i++)
    {
        int a= distance(A.begin()+i,unique(A.begin()+i,A.begin()+i+B-1));
        ans.push_back(a);
    }

    return ans;
}
