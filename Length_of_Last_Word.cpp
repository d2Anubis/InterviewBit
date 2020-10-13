int Solution::lengthOfLastWord(const string A) {
    int n = A.length();
    while(A[n-1]==' ')
    {
        n--;
    }
    int count =0;
    int i=n-1;
    while(A[i]!=' ' && i>=0)
    {
        count++;
        i--;
    }
    return count;
}
