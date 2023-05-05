// Code taken from a conversation with ChatGPT

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

        // no function description :'(
        void insert(int data, int position) {
            // create a new node with the given data
            node* new_node = new node;
            new_node->data = data;

            // if position is 0, insert at the beginning of the list
            if (position == 0) {
                new_node->next = head;
                head = new_node;
                return;
            }

            // find the node at the position-1 index, so that we can insert after that position
            node* current = head;
            for (int i = 0; i < position-1 && current != NULL; i++) {
                current = current->next;
            }

            // if the position is invalid, do not insert
            if (current == NULL) {
                cout << "Invalid position" << endl;
                delete new_node;
                return;
            }

            // insert the new node at the position
            new_node->next = current->next;
            current->next = new_node;
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
    my_list.insert(1, 0);
    my_list.display();

    my_list.insert(2, 1);
    my_list.display();

    my_list.insert(3, 1);
    my_list.display();

    my_list.insert(4, 3);
    my_list.display();

    my_list.insert(5, 2);
    my_list.display();

    // after end of list
    my_list.insert(6, 100);
    my_list.display();

    // at the head
    my_list.insert(7, 0);
    my_list.display();

    // before the head
    my_list.insert(8, -10);
    my_list.display();

    return 0;
}
