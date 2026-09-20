class Solution {
public:
    int findMin(vector<int>& nums) {
       int low{0} , high = nums.size() - 1 , min = INT_MAX;

       while(low <= high){
          int mid = low + (high -low)/2;
          min = nums[mid] < min ? nums[mid] : min;
          if(nums[mid] >= nums[low] && nums[low] > nums[high]){
            low = mid + 1;
          }else{
            high = mid - 1;
          }

       } 
       return min;
    }
};