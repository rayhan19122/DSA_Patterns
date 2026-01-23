#include<bits/stdc++.h>
using namespace std;

class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        int cnt=0;
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;

            while (l<r)
            {
                long long s=arr[i]+arr[l]+arr[r];
                if(s<sum){
                    cnt++;
                    r--;
                }
                else if(s>sum) r--;
                else r--;
            }
            
        }
        return cnt;
    }
};