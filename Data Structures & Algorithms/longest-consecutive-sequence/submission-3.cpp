class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int> st(nums.begin(),nums.end());
        for(int it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                while(st.find(it+cnt)!=st.end()){
                        cnt++;
                }
                maxi=max(maxi,cnt);
            }
           
        }
        return maxi;
    }
};
