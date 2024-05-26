class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string temp_s,temp_t;
        
        for(int i = 0; i < s.length(); i++){
            
            if(s[i] != '#'){
                temp_s.push_back(s[i]);
            }
            else if(s[i] == '#' && temp_s != ""){
                temp_s.pop_back();
            }
            
            
        }
        for(int i = 0; i < t.length(); i++){
            
            if(t[i] != '#'){
                temp_t.push_back(t[i]);
            }
            else if(t[i] == '#' && temp_t != ""){
                temp_t.pop_back();
            }
  
        }
        
        if(temp_s == temp_t) return true;
        return false;
        
    }
};