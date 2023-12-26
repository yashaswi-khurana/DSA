#include <iostream>
#include <queue>

// Node structure for the binary tree
struct Node {
int data;
Node* left;
Node* right;

Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Binary Tree class
class BinaryTree {
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
BinaryTree() : root(nullptr) {}

// Public function to insert a value into the binary tree
void insert(int value) {
root = insertRecursive(root, value);
}

// Public function to delete a value from the binary tree
void remove(int value) {
root = deleteRecursive(root, value);
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
BinaryTree tree;

// Inserting values into the tree
tree.insert(50);
tree.insert(30);
tree.insert(70);
tree.insert(20);
tree.insert(40);
tree.insert(60);
tree.insert(80);

// Displaying the tree using different traversal methods
std::cout << "In-order traversal: ";
tree.inOrder();

std::cout << "Pre-order traversal: ";
tree.preOrder();

std::cout << "Post-order traversal: ";
tree.postOrder();

std::cout << "Level-order traversal: ";
tree.levelOrder();

// Deleting a node from the tree
tree.remove(30);

// Displaying the tree after deletion
std::cout << "In-order traversal after deletion: ";
tree.inOrder();

return 0;
}

/*
Output:
In-order traversal: 20 30 40 50 60 70 80
Pre-order traversal: 50 30 20 40 70 60 80
Post-order traversal: 20 40 30 60 80 70 50
Level-order traversal: 50 30 70 20 40 60 80
In-order traversal after deletion: 20 40 50 60 70 80
*/