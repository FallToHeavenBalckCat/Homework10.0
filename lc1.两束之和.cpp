class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*使用哈希表存储所有数字和他的下标，然后遍历数组中的每一个值，看目标值域这个值的差值
        在哈希表中是否存在，如果存在直接输出下标，否则继续走*/
        unordered_map<int,int> h;
        vector<int> res;
        for(int i=0;i<nums.size();i++) h[nums[i]]=i;
        for(int i=0;i<nums.size();i++) 
        {
            int t=nums[i];
            if(h.count(target-t)&&h[target-t]!=i) 
            {
                res.push_back(i);
                res.push_back(h[target-t]);
                break;
            }
        }
        return res;
    }
};