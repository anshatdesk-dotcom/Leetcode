class Solution {
public:
int binarySearch(int low , int high , vector <int> &nums , int target){
    if(low > high) return -1;
    int mid = (low + high)/2;

    if(nums[mid] == target){
        return mid;
    }else if(nums[mid] > target){
       return binarySearch(low ,mid -1 , nums , target);
    }
    return binarySearch(mid +1 ,high , nums , target);
}
    int search(vector<int>& nums, int target) {
// Recursive Approach
int n = nums.size();
 return binarySearch(0 , n-1, nums , target);


// Iterative Approach
        // int low {0};
        // int n = nums.size();
        // int high = n-1;

        // while(low <= high){
        //  int mid = (low + high)/2;
        //  cout << (low + high);
        //  if(nums[mid] == target){
        //     return mid;
        //  }else if(nums[mid] >  target){
        //     high = mid - 1;
        //  }else{
        //     low = mid + 1;
        //  }
        // }
        // return -1;
    }
};