class Solution{
    public:
    // You need to complete this function
 int count=0;
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
       
            if(N>0)
{
    toh(N-1,1,2,3);
    cout<<"move disc " <<N<<" from rod "<<from<<" to rod "<<to<<endl;
    count++;
    toh(N-1,2,3,1);
    
}
    return count;
    }
