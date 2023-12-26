#include <iostream>
#include <queue>

// Node structure for the binary search tree
struct Node {
int data;
Node* left;
Node* right;

Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Binary Search Tree class
class BinarySearchTree {
private:
Node* root;

// Helper function for inserting a node recursively
Node* insertRecursive(Node* root, int value) {
if (root == nullptr) {
return new Node(value);
}

if (value < root->data) {
root->left = insertRecursive(root->left, value);
} else if (value > root->data) {
root->right = insertRecursive(root->right, value);
}

return root;
}

// Helper function for deleting a node recursively
Node* deleteRecursive(Node* root, int value) {
if (root == nullptr) {
return root;
}

if (value < root->data) {
root->left = deleteRecursive(root->left, value);
} else if (value > root->data) {
root->right = deleteRecursive(root->right, value);
} else {
// Node with only one child or no child
if (root->left == nullptr) {
Node* temp = root->right;
delete root;
return temp;
} else if (root->right == nullptr) {
Node* temp = root->left;
delete root;
return temp;
}

// Node with two children
Node* temp = findMin(root->right);
root->data = temp->data;
root->right = deleteRecursive(root->right, temp->data);
}

return root;
}

// Helper function to find the minimum value node in a subtree
Node* findMin(Node* root) {
while (root->left != nullptr) {
root = root->left;
}
return root;
}

// Helper function for searching a value recursively
bool searchRecursive(Node* root, int value) {
if (root == nullptr) {
return false;
}

if (value == root->data) {
return true;
} else if (value < root->data) {
return searchRecursive(root->left, value);
} else {
return searchRecursive(root->right, value);
}
}

// Helper function for in-order traversal
void inOrderTraversal(Node* root) {
if (root != nullptr) {
inOrderTraversal(root->left);
std::cout << root->data << " ";
inOrderTraversal(root->right);
}
}

// Helper function for pre-order traversal
void preOrderTraversal(Node* root) {
if (root != nullptr) {
std::cout << root->data << " ";
preOrderTraversal(root->left);
preOrderTraversal(root->right);
}
}

// Helper function for post-order traversal
void postOrderTraversal(Node* root) {
if (root != nullptr) {
postOrderTraversal(root->left);
postOrderTraversal(root->right);
std::cout << root->data << " ";
}
}

public:
// Constructor
BinarySearchTree() : root(nullptr) {}

// Public function to insert a value into the BST
void insert(int value) {
root = insertRecursive(root, value);
}

// Public function to delete a value from the BST
void remove(int value) {
root = deleteRecursive(root, value);
}

// Public function to search for a value in the BST
bool search(int value) {
return searchRecursive(root, value);
}

// Public function for in-order traversal
void inOrder() {
inOrderTraversal(root);
std::cout << std::endl;
}

// Public function for pre-order traversal
void preOrder() {
preOrderTraversal(root);
std::cout << std::endl;
}

// Public function for post-order traversal
void postOrder() {
postOrderTraversal(root);
std::cout << std::endl;
}

// Public function for level-order traversal
void levelOrder() {
if (root == nullptr) {
return;
}

std::queue<Node*> q;
q.push(root);

while (!q.empty()) {
Node* current = q.front();
std::cout << current->data << " ";

if (current->left != nullptr) {
q.push(current->left);
}

if (current->right != nullptr) {
q.push(current->right);
}

q.pop();
}

std::cout << std::endl;
}
};

int main() {
BinarySearchTree bst;

// Inserting values into the BST
bst.insert(50);
bst.insert(30);
bst.insert(70);
bst.insert(20);
bst.insert(40);
bst.insert(60);
bst.insert(80);

// Displaying the BST using different traversal methods
std::cout << "In-order traversal: ";
bst.inOrder();

std::cout << "Pre-order traversal: ";
bst.preOrder();

std::cout << "Post-order traversal: ";
bst.postOrder();

std::cout << "Level-order traversal: ";
bst.levelOrder();

// Searching for a value in the BST
int searchValue = 40;
std::cout << "Search for value " << searchValue << ": ";
if (bst.search(searchValue)) {
std::cout << "Found" << std::endl;
} else {
std::cout << "Not Found" << std::endl;
}

// Deleting a node from the BST
int deleteValue = 30;
bst.remove(deleteValue);

// Displaying the BST after deletion
std::cout << "In-order traversal after deletion: ";
bst.inOrder();

return 0;
}

/*
Output:
In-order traversal: 20 30 40 50 60 70 80
Pre-order traversal: 50 30 20 40 70 60 80
Post-order traversal: 20 40 30 60 80 70 50
Level-order traversal: 50 30 70 20 40 60 80
Search for value 40: Found
In-order traversal after deletion: 20 40 50 60 70 80
*/