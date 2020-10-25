int Solution::solve(string A) {
    int count=0;
    unordered_map<char,int>m;
    for(int i=0;i<A.length();i++)
    {
        m[A[i]]++;
    }
    unordered_map<char,int>:: iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        if(itr->second%2!=0)
        {
            count++;
        }
    }
    if(count==0||count==1)
    {
        return 1;
    }
    return 0;
}
