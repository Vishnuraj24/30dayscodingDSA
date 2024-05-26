class Solution {
public:
    
    vector<vector<int>>output;
    
    void solve(vector<int>& candidates,vector<int>& temp,int remain,int idx){
        
        //base case
        if(remain < 0){
            return;
        } 
        
        else if(remain == 0){
            output.push_back(temp);
        }
        
        for(int i = idx;i < candidates.size(); i++){
            if(i > idx && candidates[i] == candidates[i-1]) continue;
            temp.push_back(candidates[i]);
            solve(candidates,temp,remain-candidates[i],i+1); //no number used more than once so i+1 , not i
            
            temp.pop_back();
            
        }
     
        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        solve(candidates,temp,target,0);
        return output;
    }
};