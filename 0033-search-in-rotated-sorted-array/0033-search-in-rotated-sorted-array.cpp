class Solution {
private:
    int findpivot(vector<int>& nums){
        int start = 0,end = nums.size()-1;
        while(start < end){
            int mid = start + (end - start)/2;
            if(nums[mid] >= nums[0]){
                start = mid + 1;
            }
            else{
                end = mid; //mid is already present in the selected subarray so end = mid not mid - 1
            }
        }
        return start;
    }
    int binarysearch(vector<int>& nums,int start,int end,int key){
        while(start <= end){
             int mid = start + (end - start)/2;
             if(key > nums[mid]){
                 start = mid + 1;
             }
            else if(key < nums[mid]){
                end = mid - 1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int pivot = findpivot(nums);
        cout<<pivot<<endl;
       if(target>=nums[pivot] && target<=nums[nums.size()-1]){
            return binarysearch(nums,pivot,nums.size()-1,target);
        } 
        else{
            return binarysearch(nums,0,pivot-1,target);
        }
        
    }
};