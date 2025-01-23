class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int,int>m;
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]=i;
        // }
        // for(auto it:nums){
        //     if(m.find(target-it)!=m.end()){
        //         return {it.}
        //     }
        // }
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
           if(nums[i]+nums[j]==target)return {i,j};
            }
        }
        return {};
    }
};