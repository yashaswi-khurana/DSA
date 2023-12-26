#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() {
            head = NULL;
        }

        void insert(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;

            if (head == NULL) {
                head = newNode;
            } else {
                Node* temp = head;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

        void display() {
            if (head == NULL) {
                cout << "List is empty." << endl;
            } else {
                Node* temp = head;
                while (temp != NULL) {
                    cout << temp->data << " ";
                    temp = temp->next;
                }
                cout << endl;
            }
        }

        void deleteNode(int value) {
            if (head == NULL) {
                cout << "List is empty." << endl;
            } else {
                Node* temp = head;
                Node* prev = NULL;
                while (temp != NULL) {
                    if (temp->data == value) {
                        if (prev == NULL) {
                            head = temp->next;
                        } else {
                            prev->next = temp->next;
                        }
                        delete temp;
                        cout << "Node with value " << value << " deleted." << endl;
                        return;
                    }
                    prev = temp;
                    temp = temp->next;
                }
                cout << "Node with value " << value << " not found." << endl;
            }
        }

        int count() {
            int count = 0;
            Node* temp = head;
            while (temp != NULL) {
                count++;
                temp = temp->next;
            }
            return count;
        }
};

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    cout << "Initial list: ";
    list.display();

    list.deleteNode(3);
    cout << "List after deleting node with value 3: ";
    list.display();

    cout << "Number of nodes in the list: " << list.count() << endl;

    return 0;
}

//Initial list: 1 2 3 4 5 
//Node with value 3 deleted.
//List after deleting node with value 3: 1 2 4 5 
//Number of nodes in the list: 4