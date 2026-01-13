#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
            if(mp.find(req)!=mp.end() && mp[req]!=i){
                return {i,mp[req]};
            }
        }
        return {};
       
    }
};
// @lc code=end
