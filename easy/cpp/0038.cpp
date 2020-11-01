class Solution {
public:
    string countAndSay(int n) {
        string start = "1";
        int epoch = 1;
        while(epoch < n){
            string new_start = "";
            char prev = start[0];
            int size = start.length();
            int cnt = 1;
            for(int i = 1; i < size; i++){
                if(prev != start[i]){
                    new_start += to_string(cnt) + prev;
                    cnt = 0;
                    prev = start[i];
                }
                cnt++;
            }
            new_start += to_string(cnt) + prev;
            epoch++;
            start = new_start;
        }
        return start;
    }
};