class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<3) return res;
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int k=0;k<nums.size()-2;k++){
            if(nums[k]>0) break;
            if(k&&nums[k]==nums[k-1]) continue;
            int i=k+1,j=nums.size()-1;
            while(i<j){
                int s=nums[k]+nums[i]+nums[j];
                if(s>0) do j--;while(nums[j]==nums[j+1]&&i<j);
                else if(s<0) do i++;while(nums[i]==nums[i-1]&&i<j);
                else {
                    res.push_back({nums[k],nums[i],nums[j]});
                    do i++;while(nums[i]==nums[i-1]&&i<j);
                    do j--;while(nums[j]==nums[j+1]&&i<j);
                }
            }
        }
        return res;
    }
};