class Solution {
public:
    void addVals(vector<int>& arr, int start, int end) {
       
        for (; start < end; start++) {
            arr.push_back(start);
        }
        return;
    }
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missingNums;
        int checkVal{1};

        for (auto num : arr) {
            if (checkVal == num) {
                checkVal++;
            } else {
                if(missingNums.size() + num - checkVal >= k){
                    return checkVal + (k - missingNums.size()) - 1;
                }
                addVals(missingNums, checkVal, num);
                if (missingNums.size() >= k) {
                    return missingNums[k - 1];
                }
                checkVal = num +1;
            }
        }
        return arr.back() + (k - missingNums.size());
    }
};