vector<int> Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    vector<int>v;
    int i=A.size()-1;
    while(B--)
    {
        v.push_back(A[i]);
        i--;
    }
    return v;
}
