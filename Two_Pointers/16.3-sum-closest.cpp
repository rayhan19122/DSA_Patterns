#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int res=0;
        int sz=nums.size();

        for(int i=0;i<sz-2;i++){
            int left=i+1;
            int right=sz-1;
            int mx_dif=INT_MAX;
            int abs_dif=0;
            int sum=0;
            while (left<right)
            {
                sum=nums[i]+nums[left]+nums[right];
                abs_dif=abs(target-sum);

                if(sum==target) return target;
                if(sum<target){
                    if(abs_dif<mx_dif){
                        mx_dif=abs_dif;
                        res=sum;
                    }
                    left++;
                }
                else{
                    if(abs_dif<mx_dif){
                        mx_dif=abs_dif;
                        res=sum;
                    }
                    right--;
                }
            }
            
        }
        return res;
    }
};
// @lc code=end

