class Solution {

private:
    void generatesubsets(vector<int> nums,vector<int>subset,int index,vector<vector<int>>& output){
    
        //base case
        if(index == nums.size()){
            output.push_back(subset);
            return ;
        }
        
        //exclude
        generatesubsets(nums,subset,index+1,output);
        
        //include
        subset.push_back(nums[index]);
        generatesubsets(nums,subset,index+1,output); //backtracking
    
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int start = 0;
        vector<vector<int>>output;
        vector<int>subset;
        
        sort(nums.begin(),nums.end());
        
        generatesubsets(nums,subset,start,output);
        
        //remove the duplicate vectors
        sort(output.begin(), output.end());

        // Remove duplicates
        auto it = unique(output.begin(), output.end());

        // Erase the redundant elements
        output.erase(it, output.end());
        
        return output;    
    
    }
};