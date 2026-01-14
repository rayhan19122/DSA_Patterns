#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int R =1;
        int N=0;

        while(R<nums.size()){
            if(nums[R]==nums[R-1]) R++;
            else{
                nums[N+1]=nums[R];
                N++,R++;
            }
        }
    return N+1;
    
    }
};
// @lc code=end

