class MyStack
{
private:
    queue<int> main;

public:
    MyStack()
    {
    }

    void push(int x)
    {
        queue<int> qu;
        while (!main.empty())
        {
            qu.push(main.front());
            main.pop();
        }
        main.push(x);
        while (!qu.empty())
        {
            main.push(qu.front());
            qu.pop();
        }
    }

    int pop()
    {
        int popu = main.front();
        main.pop();
        return popu;
    }

    int top()
    {
        return main.front();
    }

    bool empty()
    {
        return main.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */