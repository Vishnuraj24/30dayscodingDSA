class Solution {
private:
    
    void backtracking(vector<int>& nums, vector<vector<int>>& anslist,vector<int>permutelist){
        
        //base case
        if(permutelist.size() == nums.size()){
            anslist.push_back(permutelist);
        }
        
        //else make groups
        
        for(int i = 0 ; i < nums.size(); i++){
            
            //remove duplicates and skip the element already exists in the templist
            bool used_element = find(permutelist.begin(), permutelist.end(), nums[i]) != permutelist.end();
            if(used_element || (i+1 < nums.size() && nums[i] == nums[i+1])) continue;
            
            permutelist.push_back(nums[i]);
            backtracking(nums,anslist,permutelist);
            permutelist.pop_back();//becktrack   
            
        }
    
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>permutelist;
        vector<vector<int>>anslist;
        sort(nums.begin(),nums.end());
        backtracking(nums,anslist,permutelist);
        return anslist;
    }
};