/* 23. Implementing a Queue using a Linked List
   Problem Statement: Array-based Queue Implementation
   Create a program that implements a queue using a linked list. 
   Implement enqueue, dequeue, and display operations for the queue. 
   Test the implementation by performing various queue operations. */

#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            next = NULL;
        }
};

class QueueLinkedListImpl{

    private:
        Node *front;
        Node *rear;
    
    public:
        QueueLinkedListImpl(){
            front = rear = NULL;
        }

        ~QueueLinkedListImpl(){
            Node *next;
            while(front != NULL){
                next = front->next;
                delete front;
                front = next;
            }
            
        }

        void enqueue(int data){
            Node *n = new Node(data);
            if(rear == NULL){
                rear = front = n;
            }
            else{
                rear->next = n;
                rear = n;
            }
        }

        int dequeue(){
            if(front == NULL){
                cout << "Empty queue" << endl;
                return -1;
            }
            Node *temp = front;
            int tempData = front->data;
            if(front == rear){
                front = rear = NULL;
            }
            else{
                front = front->next;
            }
            delete temp;
            return tempData;
        }

        void display(){
            Node* current = front;
            while(current != NULL){
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
};

int main(){
    
    QueueLinkedListImpl queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Queue contents: ";
    queue.display();

    cout << "Dequeued: " << queue.dequeue() << endl;
    cout << "Dequeued: " << queue.dequeue() << endl;

    cout << "Queue contents after dequeue: ";
    queue.display();

    return 0;
}