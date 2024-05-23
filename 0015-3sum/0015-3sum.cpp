class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>res;
        
        for(int i = 0 ; i < nums.size() ;i++){
            
            int j = i + 1, k = nums.size()-1;
            int sum = 0;
            while(j < k){
                sum = nums[i] + nums[j] + nums[k];
                
                if(sum > 0) k--;
                else if(sum < 0) j++;
                else{
                    vector<int>triplet = {nums[i],nums[j],nums[k]};
                    res.push_back(triplet);
                    
                    //remove duplicates j
                    while(j < k && nums[j] == triplet[1]){
                        j++;
                    }
                    
                    //remove duplicates k
                    while(j < k && nums[k] == triplet[2]){
                        k--;
                    }
                }
            }
            
            //remove the duplicates of i
            
            while(i + 1 < nums.size() && nums[i+1] == nums[i]){
                i++;
            }
        }
        
        return res;
    }
};