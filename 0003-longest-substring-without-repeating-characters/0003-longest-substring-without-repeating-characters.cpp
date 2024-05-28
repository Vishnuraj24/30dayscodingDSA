class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        int i = 0;
        
        unordered_set<char>st;
        for(int j = 0 ; j < s.length(); j++){
            
            if(st.count(s[j]) == 0){
                st.insert(s[j]);
                max_length = max(max_length, j - i + 1);
            }
            
            else{
                while(st.count(s[j]) > 0){
                    st.erase(s[i]);
                    i++;
                }
                
              st.insert(s[j]);                
            }
        }
        return max_length;
    }
};