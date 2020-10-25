int Solution::solve(string A) {
    stack<char>s;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==')')
        {
            if(!s.empty())
            {
                s.pop();
            }
            else
            {
                return 0;
            }
        }
        else
        {
            s.push('(');
        }
    }
    if(!s.empty())
    {
        return 0;
    }
    return 1;
}
