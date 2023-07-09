class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=nums.size()/2;
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
            if(mp[it]>majority) return it;
        }
        return -1;
        
    }
};