class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long res=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    res=res*nums[j];
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};
