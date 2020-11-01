#include <vector>
#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	unordered_map<int, int> table;
        vector<int> ans;
    	for(int i = 0 ; i < nums.size(); i++){
    		if(table[target - nums[i]]){
                ans.push_back(i);
                ans.push_back(table[target - nums[i]]-1);
    			break;
    		}else{
    			table[nums[i]] = i+1;
    		}
    	}
        return ans;
    }
};