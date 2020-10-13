string Solution::longestCommonPrefix(vector<string> &A) {
    string s="";
    int len=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        if(A[i].length()<len)
        {
            len=A[i].length();
        }
    }
    for(int j=0;j<len;j++)
    {
        for(int i=0;i<A.size()-1;i++)
        {
            if(A[i].at(j)!=A[i+1].at(j))
            {
                return s;
            }
        }
        s.push_back(A[0].at(j));
    }
    return s;
}
