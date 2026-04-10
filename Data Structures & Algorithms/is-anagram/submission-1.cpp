class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int> count_s; 
       unordered_map<char, int> count_t; 
       if(s.length() != t.length()){
            return false;
       }
       for(int i = 0; i < s.length(); i++){
           count_s[s[i]]++;  
           count_t[t[i]]++;  
       }   
       for(auto it = count_s.begin(); it != count_s.end(); it++){
            cout << it->first << " " << it->second << endl;
       }  
       for(auto it = count_t.begin(); it != count_t.end(); it++){
            cout << it->first << " " << it->second << endl;
       }  
       return count_s == count_t;
    }  
};
