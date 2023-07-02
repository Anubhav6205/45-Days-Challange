class Solution {
public:
    
    void moveLast(vector<int>&nums,int idx)
    {
        for(int i=idx;i<nums.size()-1;i++)
        {
            swap(nums[i],nums[i+1]);
        }
        
    }
    void moveZeroes(vector<int>& nums) {
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==0)
            {
                moveLast(nums,i);
            }
        }
        
    }
};