#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>a;
        vector<int>b;

        for(auto u:nums){
            if(u<0) a.emplace_back(u);
            else b.emplace_back(u);
        }

        for(int i=0;i<a.size();i++){a[i]=a[i]*a[i];}
        for(int i=0;i<b.size();i++){b[i]=b[i]*b[i];}
        reverse(a.begin(),a.end());
        
        int l=0,r=0;
        int sa=a.size();
        int sb=b.size();
        vector<int>ans(sa+sb);
        int id=0;
        while (l<sa && r<sb)
        {
            if(a[l]<=b[r]){
                ans[id]=a[l];
                l++,id++;
            }
            else {
                ans[id]=b[r];
                r++,id++;
            }
        }
        while (l<sa)
        {
            ans[id]=a[l];
            l++,id++;
        }
           while (r<sb)
        {
            ans[id]=b[r];
            r++,id++;
        }
        return ans;
    }
};

/*class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int siz=a.size();
        vector<int> neg;
        vector<int> pos;
        // int i;
        for(int i=0;i<siz;i++)
        {
            if(a[i]<0)
            neg.push_back(a[i]);
            else
            pos.push_back(a[i]);

        }
        if(neg.size()==0) // no negative element
        {
            for(int i=0;i<pos.size();i++)
            pos[i]=pos[i]*pos[i];
            return pos;
        }
        if(pos.size()==0) // no positibve
        {
            for(int i=0;i<neg.size();i++)
            neg[i]=neg[i]*neg[i];
            reverse(neg.begin(),neg.end());
            return neg;
        }
       
        int i=0,j=0;
        int id=0;
        int n=neg.size();
        int m=pos.size();
        vector<int> res(n+m);
        for(int i=0;i<n;i++)
        neg[i]=neg[i]*neg[i];

        reverse(neg.begin(),neg.end());
        for(int i=0;i<m;i++)
        pos[i]=pos[i]*pos[i];
        while(i<n and j<m)
        {
            if(neg[i]<=pos[j])
            {
                res[id]=neg[i];
                id++;
                i++;
            }
            else
            {
                res[id]=pos[j];
                id++;
                j++;
            }
        } // whilwe loop khatam
        while(i<n)
        {
            res[id]=neg[i];
                id++;
                i++;
        }
        while(j<m)
        {
            res[id]=pos[j];
                id++;
                j++;
        }


        return res;
    }
};*/
// @lc code=end

