class Solution {
public:
    vector<vector<int>>output;
    void solve(vector<int>&nums,vector<int>&temp,int remain,int k,int idx){
        
        if(remain < 0){
            return;
        }
        
        else if(remain == 0 && temp.size() == k){
            output.push_back(temp);
        }
        
        for(int i = idx; i < nums.size(); i++){
            
            temp.push_back(nums[i]);
            solve(nums,temp,remain - nums[i],k,i+1);
            temp.pop_back();
            
        }
        
        
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
        vector<int>temp;
        for(int i = 1; i <= 9; i++){
            nums.push_back(i);
        }
        
        solve(nums,temp,n,k,0);
        return output;
        
        
        
    }
    
    
    
    
    
};