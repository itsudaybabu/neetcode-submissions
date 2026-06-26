class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxi=0;
        int left=0;
         unordered_set<char> seen;
        for(int i=0;i<n;i++){
                while(seen.find(s[i])!=seen.end()){
                   seen.erase(s[left]);
                   left++;
                }
                seen.insert(s[i]);
                int cnt=i-left+1;
                    maxi=max(cnt,maxi);
            }
            
        
        return maxi;
    }
};
