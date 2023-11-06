//https://leetcode.com/problems/number-of-good-pairs/description/


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i:nums){
            ans = ans + mp[i];
            mp[i]++;
        }
        return ans;
    }
};

//time =O(n)
//space = O(n)