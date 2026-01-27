#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int res=INT_MAX;
        bool flag=false;
        int low,high;
        low=high=0;

        while (high<n)
        {
            sum+=nums[high];

            while (sum>=target)
            {
                int len=high-low+1;
                res=min(res,len);
                sum-=nums[low];
                low++;
                flag=true;
            }
            high++;
        }
        if(flag) return res;
        else return 0;
    }
};