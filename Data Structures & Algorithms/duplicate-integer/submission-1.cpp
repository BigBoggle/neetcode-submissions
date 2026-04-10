class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> table;
        for(int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            if(table.find(n) != table.end())
            {
                return true;
            }
            table.insert(n);
        }
        return false;
    }
};
