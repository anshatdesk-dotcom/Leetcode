class Solution {
public:
   int binSearch(int low , int high , int target,  vector<int> &nums){
    if(low > high){
        return -1;
    }
    int mid = low +(high - low)/2;
    if(nums[mid] == target) return mid;

    int leftSoln = binSearch(low , mid -1 , target , nums);
    if(leftSoln == -1) return binSearch(mid + 1 , high , target , nums);
    return leftSoln;
   }
    int search(vector<int>& nums, int target) {
        return binSearch(0 , nums.size() - 1 , target , nums);
    }
};