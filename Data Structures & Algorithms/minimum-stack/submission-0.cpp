class MinStack {
public:

    vector <int> values; 
    MinStack() {
    }
    
    void push(int val) {
       values.insert(values.begin(), val); 
    }
    
    void pop() {
        values.erase(values.begin() + 0);
    }
    
    int top() {
        return values.front();
    }
    
    int getMin() {
        int min = values[0]; 
        for(size_t i = 1; i < values.size(); i++){
           if(values[i] < min) {
                min =  values[i];
           }
        }
        return min;
    }
};
