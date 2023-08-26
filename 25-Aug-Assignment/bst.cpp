/* 24. Binary Search Tree Overview
   Problem Statement: Understanding Binary Search Trees
   Write a program that explains the concept of binary search trees and 
   demonstrates how they maintain the properties of the left subtree containing 
   values less than the root, and the right subtree containing values greater than the root. */

#include <iostream>

// Node class represents the nodes of the binary search tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

// BinarySearchTree class manages the binary search tree operations
class BinarySearchTree {
private:
    Node* root;  // Root node of the tree

    // Recursive function to insert a value into the BST
    Node* insert(Node* current, int data) {
        if (current == nullptr) {
            return new Node(data);
        }

        if (data < current->data) {
            current->left = insert(current->left, data);  // Insert into the left subtree
        } else if (data > current->data) {
            current->right = insert(current->right, data); // Insert into the right subtree
        }

        return current;
    }

    // Recursive function for inorder traversal (ascending order)
    void inorderTraversal(Node* current) {
        if (current != nullptr) {
            inorderTraversal(current->left);   // Traverse left subtree
            std::cout << current->data << " "; // Visit the current node
            inorderTraversal(current->right);  // Traverse right subtree
        }
    }

public:
    BinarySearchTree() {
        root = nullptr;
    }

    // Public function to insert a value into the BST
    void insert(int data) {
        root = insert(root, data);
    }

    // Public function to perform inorder traversal
    void inorderTraversal() {
        inorderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    BinarySearchTree bst;

    // Insert values into the binary search tree
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Inorder Traversal: ";
    bst.inorderTraversal();  // Outputs values in ascending order

    return 0;
}
