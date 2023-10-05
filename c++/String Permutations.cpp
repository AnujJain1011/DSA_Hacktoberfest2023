class Solution{
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
        vector<string>answ;
    int n = S.size();
    int permu = 1;
    for(int i=1;i<=n;i++)
    {
        permu *= i;
    }
    answ.push_back(S);
    for(int i=1;i<permu;i++)
    {
        next_permutation(S.begin(),S.end());
        answ.push_back(S);
    }
    sort(answ.begin(),answ.end());
    return answ;
    }
};
