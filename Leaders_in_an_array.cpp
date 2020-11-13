vector<int> Solution::solve(vector<int> &arr) {
    vector <int> res;
    int maxm=INT_MIN;
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]>maxm)
        {
            res.push_back(arr[i]);
        }
        maxm=max(maxm,arr[i]);
    }
    return res;
}
