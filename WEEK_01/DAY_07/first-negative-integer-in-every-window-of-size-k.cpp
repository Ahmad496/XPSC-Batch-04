vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
            vector<long long>v;
            queue<long long>q;
            long long int j =0;
            for(j=0;j<K;j++)
            {
                if(A[j]<0)
                q.push(A[j]);
            }
            if(q.empty() == 0)
            v.push_back(q.front());
            else
            v.push_back(0);
            for(j=K;j<N;j++)
            {
                if(A[j-K]<0)
                q.pop();
                if(A[j]<0)
                q.push(A[j]);
                if(q.empty() == 0)
                v.push_back(q.front());
                else
                v.push_back(0);
            }
            return v;
 }
