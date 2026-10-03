class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      sort(nums.begin(), nums.end());
      int low {1} , high {nums.back()};
      int res;
      while(low <= high){
        int sum = 0;
        int mid = low + (high - low)/2;
        for(int num : nums){
          sum += ceil((float)num/mid);
        }
        if(sum <= threshold){
            res = mid;
           high = mid -1;
        }else{
            low = mid +1;
        }
      }
   return res;
    }
};