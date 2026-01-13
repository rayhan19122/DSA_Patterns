#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start

//Using Binary Search
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++){
            int val=target-numbers[i];
            int lo=lower_bound(numbers.begin()+i+1,numbers.end(),val)-numbers.begin();
            if(lo<numbers.size() && numbers[lo]==val) return {i+1, lo+1};
        }
        return {-1, -1};
    }
};

// Using Two Pointers
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            long long sum=numbers[i]+numbers[j];
            if(sum==target) return {i+1,j+1};
            if(sum>target) j--;
            else i++;
        }
        return {-1, -1};
    }
};
// @lc code=end

