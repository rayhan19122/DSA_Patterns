#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        
        int res=0;
        int sum=0;
        int low=0;
        int high=k-1;
        int n=arr.size();

        for(int i=0;i<k;i++) sum+=arr[i];
        res=sum;
        while(high<n){
            res=max(sum,res);
            low++,high++;
            if(high==n)break;
            sum-=arr[low-1];
            sum+=arr[high];
        }
        return res;
    }
};