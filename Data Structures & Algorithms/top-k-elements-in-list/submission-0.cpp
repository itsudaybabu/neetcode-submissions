class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
           mp[nums[i]]++;
        }

        vector<pair<int,int>> st;
        for(auto it:mp){
            st.push_back({it.first,it.second});
        }
        sort(st.begin(), st.end(), [](pair<int,int>& a, pair<int,int>& b){
            return a.second > b.second;
        });
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(st[i].first);
        }
        return res;
    }
};
