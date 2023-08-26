/* 22. Implementing a Queue using an Array
   Problem Statement: Array-based Queue Implementation
   Write a program to implement a queue using an array. 
   Implement enqueue, dequeue, and display operations for the queue. 
   Test the implementation by performing various queue operations. */

#include <iostream>
using namespace std;

class QueueArrayImpl{

    private:
        int front, rear, numOfElements, size;
        int* queueArr;

        void resize(){
            int tempSize = size * 2;
            int* tempArr = new int[tempSize];
            for(int i = 0; i < size; i++){
                tempArr[i] = queueArr[(front + i) % size];
            }
            delete[] queueArr;
            queueArr = tempArr;
            front = 0;
            rear = size - 1;
            size = tempSize;
        }

    public:
        QueueArrayImpl(int size){
            front = rear = -1;
            this->size = size;
            queueArr = new int[size];
            numOfElements = 0;
        }

        ~QueueArrayImpl(){
            delete[] queueArr;
        }

        void enqueue(int data){
            if(numOfElements == size){
                resize();
            }
            if(front == -1 && rear == -1){
                front = rear = 0;
            } 
            else{
                rear = (rear + 1) % size;
            }
            queueArr[rear] = data;
            numOfElements++;
        }

        int dequeue(){
            if(numOfElements == 0){
                cout << "No elements to dequeue" << endl;
                return -1;
            } 
            else{
                int temp = queueArr[front];
                if(front == rear){
                    rear = front = -1;
                } 
                else{
                    front = (front + 1) % size;
                }
                numOfElements--;
                return temp;
            }
        }
};

int main(){
    
    QueueArrayImpl queue(5); // Create a queue with an initial size of 5

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Dequeued: " << queue.dequeue() << endl;
    cout << "Dequeued: " << queue.dequeue() << endl;

    return 0;
}
