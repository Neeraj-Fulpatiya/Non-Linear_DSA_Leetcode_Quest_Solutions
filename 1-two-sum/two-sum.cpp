class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        // for(auto it:nums){
            for(int i=0;i<nums.size();i++){

            if(m.find(target-nums[i])!=m.end()){
int sec=m.find(target-nums[i])->second;
// int ind=sec.second;
if(sec!=i)
                {return {i,sec};}
            }
        }
        // int n=nums.size();
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //    if(nums[i]+nums[j]==target)return {i,j};
        //     }
        // }
        return {};
    }
};