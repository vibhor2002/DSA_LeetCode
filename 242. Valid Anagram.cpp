class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // Declaring hashmap via vector
        vector<int> hash(26, 0);
        
        for(int i=0; s[i]!='\0'; i++) {
            hash[s[i]-'a']+=1;
        }
        
        for(int i=0; t[i]!='\0'; i++) {
            hash[t[i]-'a']-=1;
        }
        
        for(int i=0; i<hash.size(); i++) {
            if(hash[i]>0 or hash[i]<0) {
                return false;
            }
        }
        
        return true;
    }
};