int Solution::solve(vector<int> &A, int B) {
    int ans=0;
    unordered_map<int,int>m;
    for(int i=0;i<A.size();i++)
    {
        if(m.find(B^A[i])!=m.end())
        {
            ans++;
        }
        else
        {
            m[A[i]]++;
        }
    }
    return ans;
}
