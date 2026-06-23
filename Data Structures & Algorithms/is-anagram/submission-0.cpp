class Solution {
public:
    bool isAnagram(string s, string t) {
        int ss=s.size();
        int tt=t.size();
        if(ss!=tt){
            return false;
        }
        unordered_map<char,int> mp;
        for(int i=0;i<ss;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<tt;i++){
            mp[t[i]]--;
        }
        for(auto it:mp){
            if(it.second>0){
                return false;
            }
        }
         return true;
    }
};
