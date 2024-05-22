class Solution {
private:
    void generatesubsets(vector<int>nums,vector<int>subset,int index,vector<vector<int>>&output){
        //base case
        if(index >= nums.size()){
            output.push_back(subset);
            return;
        }
        
        //main logic
        
        //exclude
        generatesubsets(nums,subset,index+1,output);
        //include
        subset.push_back(nums[index]);
        generatesubsets(nums,subset,index+1,output); //backtracking
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int start = 0;
        vector<vector<int>>output;
        vector<int>subset;
        generatesubsets(nums,subset,start,output);
        return output;
        
    }
};