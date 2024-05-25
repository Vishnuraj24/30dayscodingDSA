class Solution {
public:
   int s;
   vector<vector<int>> output;
    void solve(vector<int>& candidates,vector<int>& temp,int remain,int index){
        
        if(remain < 0){
            return ;
        }
        
        //base case
        else if(remain == 0){
            output.push_back(temp);
        }
        
        
        //main logic
        
        for(int i = index; i < candidates.size(); i++){
            
            temp.push_back(candidates[i]); //do something
            solve(candidates,temp,remain - candidates[i],i); //explore
            
            temp.pop_back();   //revert to step 1
            //solve(nums,temp,i+1); // further explore
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        solve(candidates,temp,target,0);
        return output;
        
    }
};