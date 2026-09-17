/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNum(int low ,  int high) {
     int mid = high -  (high - low)/2;
        int res = guess(mid);
        if(res == 0){return mid;}
        else if(res ==  -1){return guessNum(low , mid - 1);}
         return guessNum(mid + 1 , high);
    }
    int guessNumber(int n) {
       return guessNum(1 , n);
    }
};