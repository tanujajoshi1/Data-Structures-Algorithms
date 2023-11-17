class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0, cnt2=0;
        int ele1=INT_MIN, ele2=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt1==0 && ele2 !=nums[i]){
            cnt1=1;
            ele1=nums[i];
            }
            else if(cnt2==0 && ele1!=nums[i]){
            cnt2=1;
            ele2=nums[i];
            }
            else if(nums[i]==ele1)
            cnt1++;
            else if(nums[i]==ele2)
            cnt2++;
            else{
            cnt1--;             
            cnt2--;
            }
        }

        cnt1=0; cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1)
            cnt1++;
            if(nums[i]==ele2)
            cnt2++;
            }
 vector<int>v;
 cout<<cnt1<<" "<<cnt2;
 int p = (int)n/3 +1;
            if(cnt1>=p)
            v.push_back(ele1);
            if(cnt2>=p)
            v.push_back(ele2);

            sort(v.begin(),v.end());

            return v;
       
    }
    
};
//time =O(n)
//space= O(n)