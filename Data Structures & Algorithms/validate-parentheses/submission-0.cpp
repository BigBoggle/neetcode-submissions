class Solution {
public:
    bool isValid(string s) {
        stack<char> data;    
        unordered_map<char, char> match = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        for(char x: s){
            if(x == '(' || x == '[' || x == '{'){
                data.push(x);
            }
            else 
            {
                if(data.empty() || data.top() != match[x]){
                    return false;
                }
                data.pop();
            }
        }
        return data.empty();
    }
};
