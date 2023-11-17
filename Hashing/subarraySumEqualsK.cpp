//https://leetcode.com/problems/subarray-sum-equals-k/description/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int presum=0;
        int n=nums.size();
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            if(k==presum)
            count++;

            if(mp.find(presum-k)!=mp.end())
            count += mp[presum-k];

            mp[presum]++;
        }
return count;
    }
};
//time=O(n)
//space = O(n)