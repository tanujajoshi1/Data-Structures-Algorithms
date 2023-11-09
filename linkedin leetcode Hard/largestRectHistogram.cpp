//https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/1095381295/

class Solution {
public:

    vector<int>prevSmaller(vector<int>&nums, int n){
        stack<int>s;
        vector<int>prev(n,-1);
        for(int i=0;i<n;i++){

            while(s.empty()==false && nums[s.top()]>=nums[i]){
                s.pop();
            }
            if(s.empty()==true){
                prev[i]=-1;
            }
            else{
                prev[i]=s.top();
            }
            s.push(i);

        }
        return prev;

    }

    vector<int>nextSmaller(vector<int>&nums, int n){
        stack<int>s;
        vector<int>nex(n,-1);
        for(int i=n-1;i>=0;i--){

            while(s.empty()==false && nums[s.top()]>=nums[i]){
                s.pop();
            }
            if(s.empty()==true){
                nex[i]=n;
            }
            else{
                nex[i]=s.top();
            }
            s.push(i);

        }
        return nex;
    }
     
    int largestRectangleArea(vector<int>& nums) {
       int n=nums.size();
        vector<int>pre = prevSmaller(nums,n);
        vector<int>nex = nextSmaller(nums,n);
        int res = 0;
        for(int i=0;i<n;i++){
            int x = (nex[i]-pre[i]-1)*nums[i];
            res = max(x, res);
        }
          return res;

    
    }
  
};

//time = O(n)
//space = O(n) 