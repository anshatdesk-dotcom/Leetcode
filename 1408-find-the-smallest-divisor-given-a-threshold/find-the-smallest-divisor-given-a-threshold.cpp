class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      
      int low {1} , high =  *max_element(nums.begin() , nums.end());
      int res;
      while(low <= high){
        int sum = 0;
        int mid = low + (high - low)/2;
        for(float num : nums){
          sum += ceil(num/mid);
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