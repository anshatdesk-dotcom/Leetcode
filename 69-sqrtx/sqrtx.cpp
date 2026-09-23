class Solution {
public:

    int mySqrt(int x) { 
       int low {1} , high{x/2};
       if(x == 1) return 1;
       while(low <= high){
       long long mid = low +(high - low)/2;
       if(mid * mid <= x){
        low = mid  + 1;
       }else{
        high = mid -1;
       }
       }


       return high;

   }
};