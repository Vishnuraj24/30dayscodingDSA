class Solution {
public:
    vector<vector<int>>output;
    void solve(int start,int k,vector<int>& temp,int& n){
        
        //base case
        if(k == 0){
            output.push_back(temp);
            return;
        }
        
        //main logic
        
        for(int i = start; i <= n ; i++){
            
            temp.push_back(i); //do something
            solve(i+1,k-1,temp,n); //explore
            temp.pop_back();   //revert to step 1
        }
        
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        
        solve(1,k,temp,n);
        return output;
        
    }
};