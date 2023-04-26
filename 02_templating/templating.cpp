#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<class T>
struct node {
    T data;
    node<T> *next;
};

template <class T>
class Stack {

    private:
        node<T> *top;

    public:
        Stack() { // create an empty stack
            top = nullptr;
        }
        void push(T newData) { // take a value and add it to the top of the stack, update internal variables as needed
            node<T> *newNode = new node<T>{newData, top};
            top = newNode;
        }

        T pop() { // pop top of stack and return that object's data
            // check for empty stack
            if(top != nullptr) {
                // get value from top of stack
                int oldTopData = top->data;
                node<T> *oldTop = top;
                // update top pointer
                top = top->next;
                // delete the old node
                delete oldTop;
                // return the value gotten from old top node
                return oldTopData;
            }
            return -1; // similar to problem with peek, -1 seems to be avalid value so a more advanced technique is needed..
        }

        T peek() { // peek at top of stack, returning the value of the data at the top
            if(top != nullptr) {
                return top->data;
            } else {
                return -1; // -1 is a valid value for an int...
            }
        }
};

int main() {
    Stack<int> myStack;

    // test functionality on an empty
    cout << "myStack.peek(): " << myStack.peek() << endl;
    cout << "myStack.pop(): " << myStack.pop() << endl;

    // add single value to mny stack
    int node1Value = 42;
    cout << "attempting to push the first value onto the stack (" << node1Value << ")" << endl;
    myStack.push(node1Value);
    cout << "myStack.peek() (should be " << node1Value << "): " << myStack.peek() << endl;
    cout << "Does the peek function return the same value as the push function was given: " << (node1Value == myStack.peek()) << endl;

    // add a second value to mny stack
    int node2Value = 21;
    cout << "attempting to push a second value onto the stack (" << node2Value << ")" << endl;
    myStack.push(node2Value);
    cout << "myStack.peek() (should be " << node2Value << "): " << myStack.peek() << endl;
    cout << "Does the peek function return the same value as the push function was given: " << (node2Value == myStack.peek()) << endl;

    // test pop on tha most recent value
    cout << "myStack.pop() (should be " << node2Value << "): " << myStack.pop() << endl;
    // do not pop twice yet! cout << "Does the pop function return the same value as the push function was given: " << (nodeValue == myStack.pop()) << endl;

    // test pop on value before that
    cout << "myStack.pop() (should be " << node1Value << "): " << myStack.pop() << endl;

    // test pop on empty stack
    //empty stack should pop a -1 return value
    cout << "myStack.pop() (should be " << -1 << "): " << myStack.pop() << endl;



    // new templated node and stack code demo
    node<string> myStringNode;
    myStringNode.data = "hello";
    cout << "myStringNode.data: " << myStringNode.data << endl;



    // bool stack
    Stack<bool> myBoolStack;
    myBoolStack.push(true);
    myBoolStack.push(false);

    cout << "myBoolStack.pop(): " << myBoolStack.pop() << endl;
    cout << "myBoolStack.pop(): " << myBoolStack.pop() << endl;
    cout << "myBoolStack.pop(): " << myBoolStack.pop() << endl; // extra pop to test pop from empty stack


    // string stack
    Stack<string> myStringStack;
    myStringStack.push("hi there!");
    cout << "myStringStack.pop(): " << myStringStack.pop() << endl;
    cout << "myStringStack.pop(): " << myStringStack.pop() << endl; // extra pop to test pop from empty stack



    cout << "Goodbye?" << endl << endl;

    return 0;
}
