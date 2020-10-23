vector<int> Solution::getRow(int A) {
    vector<int>v;
    int prev=1;
    int n=A;
    v.push_back(prev);
    for(int i=1;i<=n;i++)
    {
        int current=prev*(A-i+1)/i;
        v.push_back(current);
        prev=current;
    }
    return v;
}
