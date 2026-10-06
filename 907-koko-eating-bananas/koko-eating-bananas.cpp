class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      int low {1} , high {*max_element(piles.begin() , piles.end())};
      if(piles.size() == 1){
    
        return ceil((double)piles[0]/h);
      }
      while(low <= high){
        int mid = low +(high -low)/2;
        long long total_hrs{};
        for(auto pile : piles){
              total_hrs += ceil((double)pile/mid);
        }
         if(total_hrs <= h){
              high = mid -1;
         }else{
            low = mid +1;
         }

      }
      return low;
    }
};