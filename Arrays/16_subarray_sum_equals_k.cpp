class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0;
        int cnt=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
          
            int findNum=sum-k;
            if(mp.find(findNum)!=mp.end())
            {
                cnt+=mp[findNum];
            }
              mp[sum]++;
            
            
            
            
        }
        return cnt;
    }
};