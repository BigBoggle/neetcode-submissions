class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        unordered_map<char, int> tableS;
        unordered_map<char, int> tableT;
        for (int i = 0; i < s.length(); i++)
        {
            tableS[s[i]]++;
            tableT[t[i]]++;
        }
        return tableS == tableT;

    }
};
