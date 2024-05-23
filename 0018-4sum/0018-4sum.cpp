class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        
        for(int i = 0; i < nums.size(); i++){
            
            //3sum
            for(int j = i + 1; j < nums.size(); j++){
                
                int front = j + 1,back = nums.size()-1;
                
                while(front < back){
                    
                   long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[front] + nums[back];

                    
                    if(sum > target) back--;
                    
                    else if(sum < target) front++;
                    
                    else{
                        vector<int>quad = {nums[i],nums[j],nums[front],nums[back]};
                        res.push_back(quad);
                        
                        while(front < back && nums[front] == quad[2]){
                            front++;
                        }
                        
                        while(front < back && nums[back] == quad[3]){
                            back--;
                        }
                    }
                }
                while(j + 1 < nums.size() && nums[j+1] == nums[j]){
                            j++;
                        }
                
            }
            while(i + 1 < nums.size() && nums[i+1] == nums[i]){
                            i++;
                        }
        }
        return res;
        
    }
};