class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        int n = intervals.size();
        vector<int> current ;

        sort(intervals.begin(), intervals.end());
 for(auto i{0};i < n;i++){
         current = intervals[i];
        for(auto j{i+ 1};j < n;j++){
            if(intervals[j][0] > current[1]){
                i = j - 1;
                break;
            }
            else if(intervals[j][0] >=  current[0] && intervals[j][0] <= current[1]){
                current[1] = intervals[j][1] > current[1] ?intervals[j][1]: current[1] ; 
            }

            if(j == n -1){
                result.push_back(current);
                return result;
            }
        }
        result.push_back(current);
        //  if(i == n - 1){result.push_back(current);}

    }
    return result;
    }
};