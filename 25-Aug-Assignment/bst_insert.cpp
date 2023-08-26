/* 26. Binary Search Tree Insert Method
   Problem Statement: Binary Search Tree Insertion
   Write a program that implements a binary search tree and defines a method 
   to insert nodes into the tree while maintaining the binary search tree property. 
   Display the tree after inserting nodes. */

#include <iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* left, *right;

        Node(int data) {
            this->data = data;
            left = right = NULL;
        }
};

class BST{

    private:
        Node* root;

        void insertPrivate(int data, Node*& root){
            if(root == NULL){
                root = new Node(data);
            } 
            else if(data < root->data){
                if(root->left != NULL){
                    insertPrivate(data, root->left);
                } 
                else{
                    root->left = new Node(data);
                }
            } 
            else if(data > root->data){
                if(root->right != NULL){
                    insertPrivate(data, root->right);
                } 
                else{
                    root->right = new Node(data);
                }
            }
        }

        void printTree(Node* root, int level = 0){
            if(root == NULL){
                return;
            }
            printTree(root->right, level + 1);
            for(int i = 0; i < level; i++){
                cout << "    ";
            }
            cout << root->data << endl;
            printTree(root->left, level + 1);
        }

    public:
        BST(){
            root = NULL;
        }

        void insert(int data){
            insertPrivate(data, root);
        }

        void displayTree(){
            printTree(root);
        }
};

int main(){

    BST tree;

    // Insert values into the binary search tree
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(8);
    tree.insert(12);
    tree.insert(20);

    cout << "Binary Search Tree:" << endl;
    tree.displayTree();

    return 0;
}

