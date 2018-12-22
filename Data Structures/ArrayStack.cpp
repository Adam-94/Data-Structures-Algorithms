#include <iostream>

#define MAX 10000

class Stack
{
    int top;
public:
    int s[MAX];
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};


bool Stack::push(int x)
{
    if (top >= MAX - 1)
    {
        std::cout << "Error: Overflow!";
        return false;
    }
    else
    {
        s[++top] = x;
        std::cout << x << " pushed into the stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        std::cout << "Error: Underflow!";
        return 0;
    }
    else
    {
        int x = s[top--];
        std::cout << x << " popped from the stack\n";
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    std::cout << "\n";
    s.pop();
    s.pop();




    return 0;
}
