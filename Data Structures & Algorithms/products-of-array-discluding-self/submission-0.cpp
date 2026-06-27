class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans (n,1);

        // left product 
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        // right product 
        int right = 1;  // we will need one variable,1 to multiply with prefix 
        for(int i= n-1;i>=0;i--){
            ans[i] = ans[i] * right;
            right = right * nums[i];
        }

        return ans;
    }
};
