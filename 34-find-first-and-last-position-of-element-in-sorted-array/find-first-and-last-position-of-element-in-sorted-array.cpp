class Solution {
public:
int lw(vector<int> &nums , int target , int n){
 int low{0} , high{n - 1 } , ans{-1};
       while(low <= high){
           int mid = low +(high - low)/2;
           if(nums[mid] >= target){
              ans = mid;
              high = mid - 1;
           }else{
            low = mid +1 ;
           }
        }
    return ans;
}
int up(vector<int> &nums , int target , int n){
 int low{0} , high{n - 1 } , ans{n};
       while(low <= high){
           int mid = low +(high - low)/2;
           if(nums[mid] > target){
              ans = mid;
              high = mid - 1;
           }else{
            low = mid +1 ;
           }
        }
    return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
      
        int n = nums.size();
      if(n == 0) return {-1, -1};
        int lb = lw(nums , target , n);
        int ub = up(nums , target , n);
       
       if( (lb == n) || lb == -1 || (nums[lb] != target))  return {-1 , -1};
       

       return {lb , ub -1};
    }
};