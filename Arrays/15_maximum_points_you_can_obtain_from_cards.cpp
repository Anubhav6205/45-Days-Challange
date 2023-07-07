class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxi=0;
        int iterations=k;
        for(int i=0;i<k;i++)
        {
            maxi+=cardPoints[i];
        }
        int sum=maxi;
    
        int last=cardPoints.size()-1;
         while(iterations--)
         {
            if(iterations>=0)
            {
                sum-=cardPoints[iterations];
            }
             sum+=cardPoints[last];
             last--;
   
             maxi=max(maxi,sum);
            
             
             
         }
        
        
        return maxi;
    }
};