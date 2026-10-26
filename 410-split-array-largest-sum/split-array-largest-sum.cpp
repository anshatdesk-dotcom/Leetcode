class Solution {
public:
    int check(vector<int>& nums , int count){
     int student {1} , studentPages{0};

      for(auto num : nums){
          
          if(num + studentPages <= count){
            studentPages += num;
          }else{
            student ++;
            studentPages = num;
          }
      }
    return student;
    }
    int sum(vector<int> &nums){
        int sum {0};
        for(auto num: nums){
            sum += num;
        }
        return sum;
    }
    int splitArray(vector<int>& nums, int k) {
        
       int low = *max_element(nums.begin(), nums.end());
       int high = sum(nums);
       while(low <= high){

        int mid = low +(high - low)/2;

        int students = check(nums , mid);

          if(students <= k){
            high = mid -1;
          }else{
            low = mid+1;
          }

       }

       return low;

    }
};