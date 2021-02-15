int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        int val=A[i]-B[i];
        if (val<0)
        {
            val=-val;
        }
        ans=max(val,ans);
    }
    return ans;
}
