class DynamicArray {
private:
    int* array; 
    int capacity;
    int length;

public:

    DynamicArray(int capacity) : capacity(capacity), length(0) {
        array = new int[capacity];
    } 

    int get(int i) {
        return array[i];
    }

    void set(int i, int n) {
        array[i] = n;
    }

    void pushback(int n) {
        if (length == capacity)
            resize();
        array[length] = n;
        length++;
    }

    int popback() {
        if (length > 0){
            length--;
        }
        return array[length];
    }

    void resize() {
        capacity *= 2;
        int* newArray = new int[capacity];
        for(int i = 0; i < length; i++)
        {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
};
