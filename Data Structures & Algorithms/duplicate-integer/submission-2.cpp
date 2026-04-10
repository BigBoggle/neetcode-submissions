class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> data;
        for(int i = 0; i < nums.size(); i++){
            data[nums[i]] = data[nums[i]] + 1;
            if(data[nums[i]] > 1){
                return true;
            }
        }
        for(auto it = data.begin(); it != data.end(); it++){
            cout << "Key: " << it->first << "Val: " << it->second << endl;
        }
        return false;
    }
};
