class Solution {
public:
    int s;
    vector<vector<int>> output;
    void solve(vector<int>&nums,vector<int>temp,int index){
        
        //base case
        if(temp.size() == s){
            output.push_back(temp);
        }
        
        //main logic
        
        for(int i = index; i < nums.size(); i++){
            
            temp.push_back(nums[i]); //do something
            solve(nums,temp,i+1); //explore
            
            temp.pop_back();   //revert to step 1
           
        }
        
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        vector<int>temp;
        s = k;
        int start = 0;
        for(int i = 1 ; i <= n; i++){
            nums.push_back(i);
        }
        
        solve(nums,temp,start);
        return output;
        
    }
};