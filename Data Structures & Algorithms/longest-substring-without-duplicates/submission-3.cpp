class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxi=0;
        for(int i=0;i<n;i++){
            unordered_set<char> seen;
            for(int j=i;j<n;j++){
                if(seen.find(s[j])!=seen.end()){
                    break;
                }
                seen.insert(s[j]);
                int cnt=j-i+1;
                    maxi=max(cnt,maxi);
            }
            
        }
        return maxi;
    }
};
