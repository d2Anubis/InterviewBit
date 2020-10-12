int Solution::findCount(const vector<int> &A, int B) {
    int l=0;
    int r=A.size()-1;
    while(l<=r)
    {
        int mid = (l+r+1)/2;
        if(A[mid]<B)
        {
            l=mid+1;
        }
        if(A[mid]>B)
        {
            r=mid-1;
        }
        if(A[mid]==B)
        {
            int c=1;
            int n=mid+1;
            while(A[n]==B && n<A.size())
            {
                c++;
                n++;
            }
            int m=mid-1;
            while(A[m]==B && m>=0)
            {
                c++;
                m--;
            }
            return c;
        }
    }
    return 0;
}
