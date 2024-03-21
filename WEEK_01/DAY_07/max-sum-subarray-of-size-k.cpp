class Solution{
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long long int ans = 0,ans2 = 0 ;
        for(int i=0;i<K;i++)
        ans +=Arr[i];
        ans2 =ans;
        for(int i=K;i<N;i++)
        {
            ans2 += (Arr[i] - Arr[i-K]);
            ans = max(ans,ans2);

        }
        return ans;
    }
};
