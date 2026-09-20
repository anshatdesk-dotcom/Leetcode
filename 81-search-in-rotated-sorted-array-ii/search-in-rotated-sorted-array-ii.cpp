class Solution {
public:
   bool binS(int low , int high , int target , vector<int>&nums){
   if(low > high) return false;

   int mid = low +(high -low)/2;
    if(nums[mid] == target) return true;
    
    if(binS(low , mid -1 , target , nums)) return true; 
    return binS(mid + 1 , high , target , nums);

   }
    bool search(vector<int>& nums, int target) {
        return binS(0 , nums.size() - 1 , target , nums);
    }
};