class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
  // Best Approach -->
  int cnt1{0} , cnt2{0} , elm1 , elm2 , n = nums.size();
vector<int> res;

  for(auto num : nums){

    if(cnt1 == 0 && num != elm2){
        cnt1 = 1;
        elm1 = num;
    }else if(cnt2 == 0 && num != elm1){
        cnt2 = 1;
        elm2 = num;
    }else if(num == elm1){
        cnt1++;
    }else if(num == elm2){
        cnt2++;
    }else {
        cnt1 --;
        cnt2 --;
    }
  }
  cnt1 = 0; cnt2 = 0;
  for(auto num : nums){
    if(num == elm1) cnt1++;
    else if(num == elm2) cnt2++;
  }
  if(cnt1 > n/3 ){
    res.push_back(elm1);
  }
  if(cnt2 > n/3){
    res.push_back(elm2);
  }
  return res;
  
  
  
  
  
  
  
  
  
  
  
  //Better approach -->

//   int n = nums.size();
//   unordered_map<int , int> mpp; 
//   vector<int> res;
//   for(auto i{0};i < n;i++){
//     if(mpp[nums[i]] == -1) continue;
//     if(++mpp[nums[i]] > n/3){
//         res.push_back(nums[i]);
//         mpp[nums[i]] = -1;
//         }
//   }
//   return res;
  
  //Brute Force -->
    //    int n = nums.size();
    //    set<int> res;
    //    vector<int> result;
    //     for(auto i{0} ;i < n; i++){
    //    int count = 1;
    //          for(auto j{i+1};j < n;j++){
    //               if(nums[i] == nums[j]){
    //                  count++;
    //               }
    //          }
            
    //               if(count > n/3){
    //                 int len = res.size();
    //                 res.insert(nums[i]);
    //                if(res.size() > len){
    //                 result.push_back(nums[i]);
    //                }
    //               }


    //     }
        // return result;
    }
};