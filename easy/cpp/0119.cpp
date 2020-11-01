class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> start{1};
        if(!rowIndex) return start;
        int cnt = 0;
        while(cnt <= rowIndex){
            vector<int> next{1};
            for(int i = 1 ; i < cnt; i++){
                next.push_back(start[i-1] + start[i]);
            }
            next.push_back(1);
            start = next;
            cnt++;
        }
        return start;
    }
};