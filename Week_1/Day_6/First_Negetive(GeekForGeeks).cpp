
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                      vector<long long> v;
                                                 queue<long long>x;
                                                 long long l = 0, r = 0;
                                                 while(r < N){
                                                     if(A[r] < 0){
                                                         x.push(A[r]);
                                                     }
                                                     if(r - l + 1 == K){
                                                        if(!x.empty() && x.front() == A[l]){
                                                            v.push_back(x.front());
                                                            x.pop();
                                                        }
                                                        else if(!x.empty() && x.front() != A[l]){
                                                            v.push_back(x.front());
                                                        }
                                                        else if(x.empty()){
                                                            v.push_back(0);
                                                        }
                                                        l++;
                                                        r++;
                                                     }
                                                     else r++;
                                                 }
                                                 return v;
