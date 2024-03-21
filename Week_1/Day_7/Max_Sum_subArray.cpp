//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        // code here 
        long result=0;
        for(int i=0;i<K;i++)
            result+=Arr[i];
            
            long sum=result;
            for(int i=K;i<N;i++){
                sum+=Arr[i]-Arr[i-K];
                result=max(result,sum);
            }
            return result;
        }
};