int Solution::solve(vector<int> &A, int B) {
    int start=0,end=0,count=0,maxm=0;
    while(end<A.size())
    {
        if(A[end]==0)
        {
            count++;
        }
        if(count>B)
        {
            if(A[start]==0)
            {
                count--;
            }
            start++;
        }
        maxm=max(maxm,end-start+1);
        end++;
    }
    return maxm;
}
