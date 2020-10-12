int Solution::searchInsert(vector<int> &A, int B) {
    int l=0;
    int r=A.size();
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(A[mid]>B)
        {
            r=mid-1;
        }
        if(A[mid]<B)
        {
            l=mid+1;
        }
        if(A[mid]==B)
        {
            return mid;
        }
    }
    l=0;
    int n=A.size();
    if(A[0]>B)
    {
        return 0;
    }
    if(A[n-1]<B)
    {
        return n;
    }
    while(1)
    {
        if(A[l]<B && A[l+1]>B)
        {
            return l+1;
        }
        l++;
    }
}
