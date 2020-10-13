int Solution::solve(string A) {
    stack<char> s;
    int count=0;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==')')
        {
            if(s.size()>0)
            {
                s.pop();
            }
            else
            {
               count++; 
            }
        }
        if(A[i]=='(')
        {
            s.push('(');
        }
    }
    return count+s.size();
}
