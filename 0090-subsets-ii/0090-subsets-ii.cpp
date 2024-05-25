class Solution {

private:
    void generatesubsets(vector<int> nums,vector<int>subset,int index,vector<vector<int>>& output){
    
        //base case
        if(index == nums.size()){
            output.push_back(subset);
            return ;
        }
        
        
       
        
         //include
        subset.push_back(nums[index]);
        generatesubsets(nums,subset,index+1,output); //backtracking
        
        //skip the duplicates
        while(index + 1 < nums.size() && nums[index] == nums[index+1]){
            index = index+1;
        }
        
         //exclude
        subset.pop_back();
        generatesubsets(nums,subset,index+1,output);
       
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int start = 0;
        vector<vector<int>>output;
        vector<int>subset;
        
        sort(nums.begin(),nums.end());
        
        generatesubsets(nums,subset,start,output);
        
        
        return output;    
    
    }
};