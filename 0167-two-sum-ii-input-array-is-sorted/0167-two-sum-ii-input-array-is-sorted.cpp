class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        
        for(int front = 0; front < numbers.size(); front++){
            int back = numbers.size()-1;
            while(front < back){
                int sum = numbers[front] + numbers[back];
                if(sum > target){
                    back--;
                }
                else if(sum < target){
                    front++;
                }
                else{
                    return {front+1,back+1};
                    break;
                }
                
            }
        }
        
        return {-1,-1};
        
    }
};