#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int of,cm,cnt,ans;
        of=0;
        cm=cnt=ans=1;

        while (cm<nums.size())
        {
            if(nums[cm]==nums[cm-1] && cnt==1){
                nums[of+1]=nums[cm];
                of++,cm++,cnt++,ans++;
            }else if(nums[cm]!=nums[cm-1]){
                nums[of+1]=nums[cm];
                of++,cm++,cnt=1,ans++;
            }
            else cm++;
        }
        return ans;
        
    }
};
// @lc code=end

