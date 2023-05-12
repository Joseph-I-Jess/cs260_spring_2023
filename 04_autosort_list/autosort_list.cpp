// Code modified from a conversation with ChatGPT

#include <iostream>

using namespace std;

// define the node struct
struct node {
    int data;
    node* next;
};

// define the list class
class list {
    private:
        node* head;

    public:
        list() {
            head = NULL;
        }

        // Insert into list in ascending order
        void insert(int data) {
            // create a new node with the given data
            node* new_node = new node;
            new_node->data = data;
            new_node->next = NULL;

            // if head is null, then our list is empty and we need to set that node to head
            if(head == NULL) {
                head = new_node;
            } else {
                // if data is less than head, insert at the beginning of the list
                if (data < head->data) {
                    new_node->next = head;
                    head = new_node;
                } else {
                    // find the node where node->next->data is greater than new data, so that we can insert after that position
                    node* current = head;

                    for (int i = 0; current->next != NULL && data > current->next->data; i++) {
                        current = current->next;
                    }

                    // insert the new node at the position
                    new_node->next = current->next;
                    current->next = new_node;
                }
            }
        }

        void display() {
            node* current = head;
            while (current != NULL) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
};

int main() {
    list my_list;

    // insert some nodes
    my_list.insert(1);
    my_list.display();

    my_list.insert(2);
    my_list.display();

    my_list.insert(3);
    my_list.display();

    my_list.insert(4);
    my_list.display();

    my_list.insert(5);
    my_list.display();

    // after end of list
    my_list.insert(6);
    my_list.display();

    // at the head
    my_list.insert(1);
    my_list.display();

    // before the head
    my_list.insert(-1);
    my_list.display();

    // middle of list
    my_list.insert(3);
    my_list.display();

    return 0;
}
