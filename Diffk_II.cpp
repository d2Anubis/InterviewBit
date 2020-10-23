int Solution::diffPossible(const vector<int> &A, int B) {
    vector<int>v=A;
    sort(v.begin(),v.end());
    int i=0;
    int j=1;
    while(i<v.size() && j<v.size())
    {
        if(v[j]-v[i]==B && i<j)
        {
            return 1;
        }
        if(v[j]-v[i]<B && i<j)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
