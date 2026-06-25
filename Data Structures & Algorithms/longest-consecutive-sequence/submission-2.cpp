class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        int cnt=0;
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else if (nums[i]-nums[i-1]==0){
                continue;
            }
            else{
                cnt=0;
            }
        }
        return maxi+1;
    }
};
