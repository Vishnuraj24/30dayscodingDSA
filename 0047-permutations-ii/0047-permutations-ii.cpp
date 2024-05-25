class Solution {
public:
    int n;
    vector<vector<int>>output;
    void solve(unordered_map<int,int>& count,vector<int>& temp){

        //base case
        if(n == temp.size()){
            output.push_back(temp);
            
        }
        
        //main logic
        
        for(auto& [num,numcount] : count){
            
          if(numcount > 0){ //do something
            
            temp.push_back(num); 
            count[num]--;
              
            solve(count,temp); // explore
            temp.pop_back();//revert
            count[num]++;
            
          }
            
        }
        
        
        
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        unordered_map<int,int>count;
        vector<int>temp;
        n = nums.size();
        for(auto& num : nums){
            count[num]++;
        }
        
        solve(count,temp);
        
        return output;
    }
    
    
};