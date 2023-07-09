class Solution {
public:
    bool helper(vector<int>&nums,int final,int idx,vector<int>&dp)
    {
        if(idx>final) return false;
        if(final==idx) return true;
        if(dp[idx]!=-1) return dp[idx];
        for(int i=1;i<=nums[idx];i++)
        {
            dp[idx]=helper(nums,final,idx+i,dp);
            if(dp[idx])
            {
                return true;
            }
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>dp(n+1,-1);
        return helper(nums,n,0,dp);
        
        
    }
};