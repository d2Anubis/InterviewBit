int Solution::bulbs(vector<int> &A) {
    int c=0;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==(c%2))
        {
            ans++;
            c++;
        }
    }
    return ans;
}
