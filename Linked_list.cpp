#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
};
void insert(Node** head, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}
Node* remove(Node* head){
    if(head == NULL)
        return;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main()
{
    Node* head = NULL;
return 0;
}