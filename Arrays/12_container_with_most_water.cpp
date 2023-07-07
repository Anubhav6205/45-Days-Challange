class Solution {
public:
    int maxArea(vector<int>& height) {
      
        int l=0,r=height.size()-1;
        int area=0;
        while(l<r)
        {
          cout<<"r-l:"<<r-l<<endl;
            int w=r-l;
            int h=min(height[l],height[r]);
  
            area=max(area,w*h);
      
            height[l]<height[r]?l++:r--;

            
        }
        return area;
        
    }
};