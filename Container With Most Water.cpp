class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0, n=height.size();
        int i=0, j=n-1;
        area = (j-i)*min(height[i],height[j]);
        while(i<j){
            if(height[i]<height[j]){
                i++;
                area = max(area,(j-i)*min(height[i],height[j]));
            }
            else{
                j--;
                area = max(area,(j-i)*min(height[i],height[j]));
            }
        }
        return area;
    }
};