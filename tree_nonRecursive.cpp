#include <iostream>
#include<cstdlib>
#include <stack>

using namespace std;

// Structure for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = Null;
    }
};

// Function to perform in-order traversal of a binary tree using a stack
void inOrderTraversal(Node* root) {
    stack<Node*> s;
    Node* current = root;

    while (current != nullptr || !s.empty()) {
        // Reach the leftmost node of the current subtree
        while (current != NULL) {
            s.push(current);
            current = current->left;
        }

        // Backtrack from the empty subtree and visit the node at the top of the stack
        current = s.top();
        s.pop();

        cout << current->data << " ";

        // Move to the right child of the visited node
        current = current->right;
    }
}

// Function to perform pre-order traversal of a binary tree using a stack
void preOrderTraversal(Node* root) {
    if (root == NULL)
        return;

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* current = s.top();
        s.pop();

        cout << current->data << " ";

        if (current->right)
            s.push(current->right);

        if (current->left)
            s.push(current->left);
    }
}

// Function to perform post-order traversal of a binary tree using a stack
void postOrderTraversal(Node* root) {
    stack<Node*> s;
    Node* current = root;
    Node* lastVisitedNode = NULL;

    while (current != NULL || !s.empty()) {
        // Reach the leftmost node of the current subtree
        while (current != NULL) {
            s.push(current);
            current = current->left;
        }

        Node* topNode = s.top();

        if (topNode->right && topNode->right != lastVisitedNode) {
            // If right child exists and has not been visited yet
            current = topNode->right;
        } else {
            // Visit the node and mark it as the last visited
            cout << topNode->data << " ";
            lastVisitedNode = topNode;
            s.pop();
        }
    }
}

// Test the implementation
int main() {
    /* 
                    1
                   / \
                  2   3
                 / \
                4   5
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}

