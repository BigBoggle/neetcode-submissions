class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> duplicate;
        for(size_t i = 0; i < nums.size(); i++ ){
            duplicate[nums[i]] += 1; 
            if(duplicate[nums[i]] > 1)
                return true;
        }
        return false;
    }
};