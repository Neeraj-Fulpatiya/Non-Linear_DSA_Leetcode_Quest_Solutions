class Solution {
public:
    int maxArea(vector<int>& height) {
       int left=0;
       int right=height.size()-1; 
    int size=height.size();
    int area=0;

    int width=height.size()-1;

    while(left<right){

     int ht=min(height[left],height[right]);
     int currArea=ht*width;
area=max(area,currArea);
if(height[left]<=height[right]){
    left++;
}
else{
    right--;
}
width--;


    }
    return area;
    }
};