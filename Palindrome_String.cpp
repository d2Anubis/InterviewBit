int Solution::isPalindrome(string A) {
    int n=A.size();
    int j = 0; 
    for (int i = 0; i < n; i++) { 
        if ((A[i] >= 'A' && A[i] <= 'Z') || 
            (A[i] >='a' && A[i] <= 'z')||
            (A[i]>='0' && A[i]<='9')) 
        {  
            A[j] = A[i]; 
            j++; 
        } 
    } 
    if(j==1||j==0)
    {
        return 1;
    }
    int i=0;
    A.erase(remove(A.begin(), A.end(), ' '), A.end()); 
    transform(A.begin(), A.end(), A.begin(), ::tolower); 
    while(i<=j/2)
    {
        if(A[i]==A[j-(i+1)])
        {
            i++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
