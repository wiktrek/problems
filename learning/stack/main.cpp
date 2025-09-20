#include <iostream>
#include <algorithm>
using namespace std;
struct Node {
    int value;
    Node* prev;
    Node(int v) {
        value = v;
        prev = nullptr;
    }
};
class Stack {
    public:
        int length;
    Stack() {
        head = nullptr;
        length = 0;    
    };
    void push(int item) {
        Node* node = new Node(item);
        node->prev = head;
        head = node;
        length++;
    }
    int pop() {
        if (!head) throw runtime_error("Stack is empty");
        Node* h = head;
        head = head->prev;
        int val = h->value;
        delete h;
        length--;
        return val;
    }
    int peek() {
        if (!head) throw runtime_error("Stack is empty");
        return head->value;
    };
    private: 
        Node* head;    
};

int main() {
    Stack test;
    test.push(4);
    test.push(5);
    cout << test.peek() << " ";
    test.pop();
    cout << test.peek();
    return 0;
}