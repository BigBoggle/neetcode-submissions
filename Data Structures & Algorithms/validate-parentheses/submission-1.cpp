class Solution {
public:
    bool isValid(string s) {
       std::unordered_map<char, char> valid = {
        {')', '('},
        {']', '['},
        {'}', '{'} 
       };

       std::stack<char> stk;

       for(char x : s ){
            if(x == '(' || x == '[' || x == '{'){
                stk.push(x);
            }
            else{

            if(stk.empty() || stk.top() != valid[x]){
                return false;
            }
            stk.pop();
            } 
       }
       return stk.empty();
    }
};
