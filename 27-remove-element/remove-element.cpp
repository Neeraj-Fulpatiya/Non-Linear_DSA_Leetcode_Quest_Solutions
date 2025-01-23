class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int l=0;
       int n=nums.size();
       int r=0;
       while(r<n){
        if(nums[r]!=val){
            nums[l++]=nums[r];
        }
        r++;
       } 
       return l;
    }
};