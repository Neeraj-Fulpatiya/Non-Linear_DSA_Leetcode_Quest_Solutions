class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
//         int n=nums.size();
// long ans=0;
    //     for(int i=0;i<n;i++){
    //         int sum=0;
    //         for(int j=i;j<n;j++){
    //           sum+=nums[j];
    //           if(sum==k){
    //             ans++;
    //           }
    //         }               //so this is the brute force , now we will be optimizing it using the sliding window
    //     }
    //     return ans;
//     int n=nums.size();
// int ans=0;
//     int left=0,right=0;
    
//     int sum=0;
//     while(left<n  ){
        
//         // if(sum==k)

//         if(sum<k && right<n){
//             sum+=nums[right++];
//         }
//         else if(sum>k && left<right){
//             sum=sum-nums[left++];
//         }
//         else if(sum==k){
//             ans=ans+1 ;
//             sum=sum-nums[left];
//             left++;
// right++;
//         }
//     }
//     return ans;
     unordered_map<int,int>mpp;
int n=nums.size();
    int prefixSum[n];
// for(auto x:nums){
// prefixSum[]
// }


int psum=0;
int ans=0;
mpp[0]=1;
for(int i=0;i<n;i++){
psum+=nums[i];
if(mpp.count(psum-k)>0){
ans=ans+mpp[psum-k];
}
mpp[psum]++;
}
return ans;
   
    }
};

