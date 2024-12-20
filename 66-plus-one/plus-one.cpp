class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>ans;
        int last=digits[n-1];
        if(digits[n-1]!=9){
// last++;
digits[n-1]+=1;
return digits;
        }
        int carry=1;
        int val=0;

            // val=nums[i]+1;
            int l=0;
        for(int i=n-1;i>=0;i--){
            val=digits[i]+carry;
            carry=val/10;
            // if(nums[i])

             ans.push_back(val%10);
l++;

        }
        if(carry){
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};