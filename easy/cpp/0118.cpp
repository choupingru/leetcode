class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(!numRows) return res;
        vector<int> start{1};
        res.push_back(start);
        while(numRows-- > 1){
            vector<int> next{1};
            vector<int> last = res.back();
            for(int i = 1 ; i < last.size() ; i++){
                next.push_back(last[i] + last[i-1]);
            }
            next.push_back(1);
            res.push_back(next);
        }
        return res;
    }
};