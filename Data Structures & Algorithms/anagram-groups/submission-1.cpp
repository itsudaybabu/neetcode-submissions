class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>>ans;
            unordered_map<string,vector<string>> mp;
            int n=strs.size();
            for(auto it:strs){
                vector<int> freq(26,0);
                for(char c:it){
                    freq[c-'a']++;
                }
                string str="";
                for(int i=0;i<26;i++){
                    str+=to_string(freq[i])+",";
                }
                mp[str].push_back(it);
            }
            for(auto it:mp){
                ans.push_back(it.second);
            }
        return ans;
    }
};