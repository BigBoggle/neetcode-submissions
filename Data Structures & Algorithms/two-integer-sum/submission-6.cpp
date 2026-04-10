class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       std::unordered_map<int, int> data;
       // Copy nums to unordered_map
       for(int i = 0; i < nums.size(); i++) {
            data[nums[i]] = i;
       }

       // Iterate through unordered_map, checking if diff exists in map and isn't the same index,
       // Returning the index and diff if we have a match.
       for(int j = 0;  j < nums.size(); j++){
            int diff = target - nums[j];
            if(data.count(diff) && data[diff] != j)
                return {j, data[diff]};
       }
       return {};
    }
};
