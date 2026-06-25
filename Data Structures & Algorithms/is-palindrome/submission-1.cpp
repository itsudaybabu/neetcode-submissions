class Solution {
public:
    bool isPalindrome(string s) {
        for(char &c : s){
            c = tolower(c);
         }
         int l=0;
         int r=s.length()-1;
         while(l<=r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }
             if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(s[l]!=s[r]){
                return false;
            }
            else{
                l++;
                r--;
            }
         }
        return true;
    }
};
