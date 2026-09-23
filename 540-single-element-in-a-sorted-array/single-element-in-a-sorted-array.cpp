class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int ans {-1};
        if(high == low) return nums[0];
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[high] == nums[low]){
                return nums[low];
            }
             else if(nums[mid + 1] == nums[mid]){
               if(mid % 2 == 0){
               low = mid + 1; 
               } else {high = mid -1;}
             }else if(nums[mid -1] == nums[mid]){
               if(mid % 2 == 0){
           
                high = mid + 1 ;
               }else{     low = mid + 1;}
             }else{
                ans =nums[mid];
                break;
             }
        }
        return ans;
    }
};