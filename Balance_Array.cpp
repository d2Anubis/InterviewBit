int Solution::solve(vector<int> &A) {
    int odd_l=0,odd_r=0,even_l=0,even_r=0,count=0;
    for(int i=0;i<A.size();i++)
    {
        if(i%2)
        {
            odd_r+=A[i];
        }
        else
        {
            even_r+=A[i];
        }
    }
    for(int i=0;i<A.size();i++)
    {
        if(i%2)
        {
            odd_r-=A[i];
        }
        if(!(i%2))
        {
            even_r-=A[i];
        }
        if(odd_r+even_l==even_r+odd_l)
        {
            count++;
        }
        if(i%2)
        {
            even_l-=A[i];
        }
        if(!(i%2))
        {
            odd_l-=A[i];
        }
    }
    return count;
}
