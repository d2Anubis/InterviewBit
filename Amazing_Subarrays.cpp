int Solution::solve(string A) {
    int n=A.length();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(A.at(n-1-i)=='a'||A.at(n-1-i)=='e'||A.at(n-1-i)=='i'||A.at(n-1-i)=='o'||A.at(n-1-i)=='u')
        {
            count+=i+1;
        }
        if(A.at(n-1-i)=='A'||A.at(n-1-i)=='E'||A.at(n-1-i)=='I'||A.at(n-1-i)=='O'||A.at(n-1-i)=='U')
        {
            count+=i+1;
        }
    }
    return count%10003;
}
