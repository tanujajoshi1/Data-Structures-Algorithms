//https://leetcode.com/problems/trapping-rain-water/submissions/

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int l = 0, r = n-1;
        int maxleft=0, rightmax =0;
        int res=0;

        while(l<=r){
            if(height[l]<=height[r]){
                    if(maxleft<=height[l])
                    maxleft=height[l];

                    else
                    res+= maxleft - height[l];

                    l++;
            }
            else{
                    if(rightmax <= height[r])
                        rightmax = height[r];

                    else
                    res+= (rightmax - height[r]);

                    r--;
            }
        }
        return res;
    }
};

//time = O(n)
//space = O(1)