#include <iostream>
#include <cstdio>

using std::cout;
using std::endl;

using std::printf;

struct node {
    int data;
    node *next;
};

class Stack {

    private:
        int top;
        node *storage[];

    public:
        void push(int newData); // take a value and add it to the top of the stack, update internal variables as needed
        int pop(); // pop top of stack and return that object's data
        int peek(); // peek at top of stack
};

int getElement(int arr[], int arrLength, int position);

int main() {
    // int eger = 0;
    // float ing = 3.14;
    // char mander = '\0';
    // long long longNumber = 99999999;
    // short stack = 65535;
    // bool isTrue = false; // talk about truthiness and falsiness...!  Even works as a number, scary!
    
    // int *intPtr = &eger;
    // void *empty;  // complicated... could point to anything

    // if(eger = 42) { //we can also assign values in control structures (such as if statements)...
    // if(eger) { //we can also assign values in control structures (such as if statements)...
    //     cout << "eger (" << eger << ") is truthy!" << endl;
    //     printf("eger (%i), is truthy! Plus some more values: ing: %f, mander: %c!\n", eger, ing, mander);
    // } else {
    //     cout << "eger (" << eger << ") is falsey!" << endl;
    // }

    // if(mander) {
    //     cout << "mander (" << mander << ") is truthy!" << endl;
    // } else {
    //     cout << "mander (" << mander << ") is falsey!" << endl;
    // }

    // cout << "!isTrue (" << !isTrue << ")!" << endl;

    // cout << "intPtr (" << intPtr << ")!" << endl;
    // cout << "&intPtr (" << &intPtr << ")!" << endl;
    // cout << "*intPtr (" << *intPtr << ")!" << endl;

    // arrays
    // int numbers[] = {2, 4, 6, 8}; // size 4
    // int numbers2[10] = {0}; // size 10, indices 0-9, initialize to 0; because not all compiler or run-time environments do this for us...
    // numbers2[0] = 24;

    // /* this technique to discover the number of elements in an array works
    //     great when we have direct access to the array, rather than a
    //     pointer to it
    // */
    // int numbersLength = sizeof numbers / sizeof numbers[0];
    // int numbers2Length = sizeof numbers2 / sizeof numbers2[0];
    // cout << "sizeof numbers: " << sizeof numbers / sizeof numbers[0] << endl;
    // cout << "sizeof numbers2: " << sizeof numbers2 / sizeof numbers2[0] << endl;
    // // cout << "sizeof(numbers2): " << sizeof(numbers2) << endl;
    // // cout << "sizeof numbers[0]: " << sizeof numbers[0] << endl;

    // for(int i = 0; i < numbersLength; ++i) {
    //     cout << "numbers[" << i << "]: " << numbers[i] << endl;
    // }
    // for(int i = 0; i < numbers2Length; ++i)
    // cout << "numbers2["<< i << "]: " << numbers2[i] << endl;

    // int result = getElement(numbers, numbersLength, 3);
    // cout << "result of getElement(numbers, numbersLength, 3): " << result << endl;
    // // We can access outside the array, but only while still within our program...
    // // result = getElement(numbers, 4);
    // // cout << "result of getElement(numbers, 4): " << result << endl;
    // // result = getElement(numbers, 10);
    // // cout << "result of getElement(numbers, 10): " << result << endl;
    // // result = getElement(numbers, 10000);
    // // cout << "result of getElement(numbers, 10000): " << result << endl;
    // // result = getElement(numbers, 1000000);
    // // cout << "result of getElement(numbers, 1000000): " << result << endl;

    // struct part during declaration of a variable is optional!
    struct node node0{0, nullptr};
    node node1{1, nullptr};

    cout << "node0.data: " << node0.data << endl;
    cout << "node0.next: " << node0.next << endl;
    cout << "node1.data: " << node1.data << endl;
    cout << "node1.next: " << node1.next << endl << endl;

    node0.next = &node1;

    cout << "node0.data: " << node0.data << endl;
    cout << "node0.next: " << node0.next << endl;
    cout << "node1.data: " << node1.data << endl;
    cout << "node1.next: " << node1.next << endl << endl;

    node node2{2, nullptr};
    node1.next = &node2;

    cout << "node0.data: " << node0.data << endl;
    cout << "node0.next: " << node0.next << endl;
    cout << "node1.data: " << node1.data << endl;
    cout << "node1.next: " << node1.next << endl;
    cout << "node2.data: " << node2.data << endl;
    cout << "node2.next: " << node2.next << endl << endl;

    node *current = &node0;
    while(current != nullptr) {
        cout << "current->data: " << current->data << endl;
        current = current->next;
    }
    cout << "current: " << current << endl;
    // we cannot access memory outside of our program's allocated memory... we might see a segmentation fault (segfault)
    // cout << "current->data: " << current->data << endl;

    // current = &node0;
    // node **current_ptr_ptr = &current;


    cout << "Goodbye?" << endl << endl;

    return 0;
}

// Take an array and a position, return that position in the array.
int getElement(int arr[], int arrLength, int position) {
    // not a great technique to use with a function...
    // cout << "sizeof arr: " << sizeof arr << endl;
    // cout << "sizeof arr / sizeof arr[0]: " << sizeof arr / sizeof arr[0] << endl;
    cout << "size of arr: " << arrLength << endl;
    return arr[position];
}

// fun!
int getElementFromPointer(int *arr, int arrLength, int position) {
    // not a great technique to use with a function...
    // cout << "sizeof arr: " << sizeof arr << endl;
    // cout << "sizeof arr / sizeof arr[0]: " << sizeof arr / sizeof arr[0] << endl;
    cout << "size of arr: " << arrLength << endl;
    return arr[position];
}
