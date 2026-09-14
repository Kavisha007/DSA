class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxwater=0;
        int i=0,j=n-1;
        while(i<j){
            int wt=j-i;
            int ht=min(height[i],height[j]);
            int area=wt*ht;
            maxwater=max(area,maxwater);
            if(height[i]<=height[j]) i++;
            else if(height[i]>height[j]) j--;
        }
        return maxwater;
    }
};