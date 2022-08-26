#include<stack>
#include<cassert>
using namespace std;

class MyQueue {
    stack<int> positive, inverted;
public:
    MyQueue() {

    }

    void push(int x) {
        positive.push(x);
    }

    int pop() {
        move();
        auto item = inverted.top();
        inverted.pop();
        return item;
    }

    int peek() {
        move();
        return inverted.top();
    }

    bool empty() {
        return positive.empty() && inverted.empty();
    }
private:
    void move() {
        if (!inverted.empty()) return;
        while (!positive.empty())
        {
            inverted.push(positive.top());
            positive.pop();
        }
    }
};

int main() {
    MyQueue myQueue;
    myQueue.push(1);
    myQueue.push(2);
    assert(myQueue.peek() == 1);
    assert(myQueue.pop() == 1);
    assert(myQueue.empty() == false);
}