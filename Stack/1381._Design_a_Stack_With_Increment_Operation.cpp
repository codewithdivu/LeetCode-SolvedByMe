class CustomStack {
private:
    int* arr;
    int top;
    int maxu;
public:
    CustomStack(int maxSize) {
        arr = new int[maxSize];
        this->top = -1;
        this->maxu = maxSize;
    }
    
    void push(int x) {
        if(top<maxu-1){
            top++;
            arr[top] = x;
        }
    }
    
    int pop() {
        if(top>=0){
            int ans = arr[top];
            top--;
            return ans;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int size = k;
        if(top<k){
            size = top+1;
        }
        for(int i=0;i<size;i++)
        {
            arr[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */