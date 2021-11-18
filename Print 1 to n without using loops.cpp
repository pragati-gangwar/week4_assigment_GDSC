class Solution
{
public:
    void printTillN(int N)
    {   if(N==0)
        return ;
        else
        printTillN(N-1);
        cout<<N<<" ";
        
        
    }
};
