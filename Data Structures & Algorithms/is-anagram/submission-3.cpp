class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> count_s;
        std::unordered_map<char, int> count_t;

        if(s.length() != t.length())
            return false;
        for(int i = 0; i < s.size(); i++){
            count_s[s[i]]++;
            count_t[t[i]]++;
        }

        if(count_s == count_t){
            return true;
        }
        else{
            return false;
        }

        
    }
};
