class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      
      int low {1} , high =  *max_element(nums.begin() , nums.end());
      while(low <= high){
        int sum = 0;
        float mid = low + (high - low)/2;
        for(float num : nums){
          sum += ceil(num/mid);
        }
        if(sum <= threshold){
           high = mid -1;
        }else{
            low = mid +1;
        }
      }
   return low;
    }
};