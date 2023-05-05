#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;

struct node {
    int data;
    node *next;
};

class Stack {

    private:
        node *top;

    public:
        // create an empty stack
        Stack() { // O(1)
            top = nullptr;
        }

        // take a value and add it to the top of the stack, update internal variables as needed
        void push(int newData) { // O(1)
            node *newNode = new node{newData, top}; // O(1)
            top = newNode; // O(1)
        }

        // pop top of stack and return that object's data
        int pop() { // O(1)
            // check for empty stack
            if(top != nullptr) { // O(1)
                // get value from top of stack
                int oldTopData = top->data; // O(1)
                node *oldTop = top; // O(1)
                // update top pointer
                top = top->next; // O(1)
                // delete the old node
                delete oldTop; // O(1)
                // return the value gotten from old top node
                return oldTopData; // O(1)
            }
            // similar to problem with peek, -1 seems to be avalid value so a more advanced technique is needed..
            return -1; // O(1)
        }

        // peek at top of stack, returning the value of the data at the top
        int peek() { // O(1)
            if(top != nullptr) { // O(1)
                return top->data; // O(1)
            } else {
                // -1 is a valid value for an int...
                return -1; // O(1)
            }
        }

        // build a string with the contents of this stack and return that string; with optional delimiter and prefix and postfix strings
        string toString(string delimiter=", ", string prefixString="[", string postfixString="]") { // O(n)
            stringstream result; // O(1)
            result << prefixString; // O(1)

            node *current = top; // O(1)
            while(current != nullptr) { // O(n)
                result << current->data; // O(1)
                if(current->next != nullptr) { // O(1)
                    result << delimiter; // O(1)
                }
                current = current->next; // O(1)
            }    
            result << postfixString; // O(1)

            return result.str(); // O(?), this could walk through the full list to generate that string... we should look that up...
        }
};

int main() { // O(n)
    Stack myStack; // O(1)

    // test functionality on an empty
    cout << "myStack.peek(): " << myStack.peek() << endl; // O(1)
    cout << "myStack.pop(): " << myStack.pop() << endl; // O(1)

    // add single value to mny stack
    int node1Value = 42; // O(1)
    cout << "attempting to push the first value onto the stack (" << node1Value << ")" << endl; // O(1)
    myStack.push(node1Value); // O(1)
    cout << "myStack.peek() (should be " << node1Value << "): " << myStack.peek() << endl; // O(1)
    cout << "Does the peek function return the same value as the push function was given: " << (node1Value == myStack.peek()) << endl; // O(1)

    // add a second value to mny stack
    int node2Value = 21; // O(1)
    cout << "attempting to push a second value onto the stack (" << node2Value << ")" << endl; // O(1)
    myStack.push(node2Value); // O(1)
    cout << "myStack.peek() (should be " << node2Value << "): " << myStack.peek() << endl; // O(1)
    cout << "Does the peek function return the same value as the push function was given: " << (node2Value == myStack.peek()) << endl; // O(1)

    // test pop on tha most recent value
    cout << "myStack.pop() (should be " << node2Value << "): " << myStack.pop() << endl; // O(1)
    // do not pop twice yet! cout << "Does the pop function return the same value as the push function was given: " << (nodeValue == myStack.pop()) << endl;

    // test pop on value before that
    cout << "myStack.pop() (should be " << node1Value << "): " << myStack.pop() << endl; // O(1)

    // test pop on empty stack
    //empty stack should pop a -1 return value
    cout << "myStack.pop() (should be " << -1 << "): " << myStack.pop() << endl; // O(1)

    // test adding a bunch of elements in a loop and then verifying that stack of elements?
    // ask the user for the number of elements to be added... making the size a variable
    for(int i = 0; i < 10; ++i) { // O(n)
        myStack.push(i); // O(1)
    }
    cout << "myStack.toString(): " << myStack.toString() << endl; // O(n)
    //cout << "myStack.toString(\".. \", \"{\", \"}\"): " << myStack.toString(".. ", "{", "}") << endl; // O(n)

    cout << "Goodbye?" << endl << endl; // O(1)

    return 0; // O(1)
}
