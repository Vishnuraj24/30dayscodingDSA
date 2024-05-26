class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int res = nums[0],temp = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            
            if(nums[i] > nums[i-1]){
                temp+=nums[i];
            }
            else{
                temp = nums[i];
            }
            res = max(res,temp);
        }
        return res;
        
    }
};