int Solution::maxArea(vector<int> &A) {
    int a=A.size()-1,b=0,ans=0;
    while(a>b)
    {
        ans=max(ans,min(A[a],A[b])*(a-b));
        if(A[a]>A[b])
        {
            b++;
        }
        else
        {
            a--;
        }
    }
    return ans;
}
