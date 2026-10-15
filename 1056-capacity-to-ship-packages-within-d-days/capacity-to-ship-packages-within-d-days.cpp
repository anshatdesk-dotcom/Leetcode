class Solution {
public:
    int daysTook ( vector<int> &weights , int cap){
        int day{1} , loaded {0};
        for(auto weight : weights){

            if(loaded + weight > cap){
                day++;
                loaded = weight;
            }else{
                loaded += weight;
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high {};
        for(auto weight : weights) high += weight;
    
       while(low <= high){
        int mid = low +(high - low)/2;
        int checkDays = daysTook(weights , mid);

        if(checkDays <= days){
            high = mid - 1;
        }else{
            low = mid +1;
        }
       }
    return low;
    }
};