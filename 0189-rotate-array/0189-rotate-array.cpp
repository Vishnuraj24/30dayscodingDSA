class Solution {
public:
    
    void reversearr(vector<int>& nums,int i,int j){
        
        while(i < j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        
    }
    
    
    void rotate(vector<int>& nums, int k) {
        
        int temp_k = k % nums.size();
        
        reversearr(nums,0,nums.size()-temp_k-1);
        reversearr(nums,nums.size()-temp_k,nums.size()-1);
        reverse(nums.begin(),nums.end());
        
        
    }
};