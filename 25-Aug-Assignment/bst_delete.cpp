/* 27. Binary Search Tree Deletion Overview
   Problem Statement: Deletion in Binary Search Tree
   Create a program that explains the process of deleting nodes from a binary search tree 
   while maintaining the binary search tree property. */

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

class BST {
private:
    Node* root;

    Node* findMin(Node* root) {
        while (root->left != NULL) {
            root = root->left;
        }
        return root;
    }

    Node* insertPrivate(int data, Node *&root) {
        if (root == NULL) {
            root = new Node(data);
        } else if (data < root->data) {
            root->left = insertPrivate(data, root->left);
        } else if (data > root->data) {
            root->right = insertPrivate(data, root->right);
        }
        return root;
    }

    Node* removePrivate(int data, Node *&root) {
        if (root == NULL) {
            return root;
        } else if (data < root->data) {
            root->left = removePrivate(data, root->left);
        } else if (data > root->data) {
            root->right = removePrivate(data, root->right);
        } else {
            if (root->left == NULL && root->right == NULL) {
                delete root;
                root = NULL;
            } else if (root->left == NULL) {
                Node *temp = root;
                root = root->right;
                delete temp;
            } else if (root->right == NULL) {
                Node *temp = root;
                root = root->left;
                delete temp;
            } else {
                Node *temp = findMin(root->right);
                root->data = temp->data;
                root->right = removePrivate(temp->data, root->right);
            }
        }
        return root;
    }

    void printTree(Node* root, int level = 0) {
        if (root == NULL) {
            return;
        }
        printTree(root->right, level + 1);
        for (int i = 0; i < level; i++) {
            cout << "    ";
        }
        cout << root->data << endl;
        printTree(root->left, level + 1);
    }

public:
    BST() {
        root = NULL;
    }

    void insert(int data) {
        root = insertPrivate(data, root);
    }

    void remove(int data) {
        root = removePrivate(data, root);
    }

    void displayTree() {
        printTree(root);
    }
};

int main() {
    BST tree;

    // Insert values into the binary search tree
    tree.insert(100);
    tree.insert(125);
    tree.insert(115);
    tree.insert(75);
    tree.insert(85);

    // Display the tree structure before removal
    cout << "Binary Search Tree before removal:" << endl;
    tree.displayTree();

    // Remove a node from the binary search tree
    tree.remove(100);

    // Display the tree structure after removal
    cout << "Binary Search Tree after removal:" << endl;
    tree.displayTree();

    return 0;
}
