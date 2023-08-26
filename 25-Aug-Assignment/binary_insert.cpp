/* 31. Binary Min/Max Heap Insert (Array Recursive Implementation)
   Problem Statement: Binary Min/Max Heap Insertion
   Write a program that implements a binary min/max heap using an array and defines a recursive method 
   to insert elements into the heap while maintaining the min/max heap property. 
   Display the heap after inserting elements. */

#include <iostream>
using namespace std;

class BinaryHeap {
private:
    int *heapArray;
    int capacity;
    int size;

    // Helper function to swap two elements in the heap
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Recursive function to maintain heap property after insertion
    void heapifyUp(int index) {
        if (index == 0) {
            return;
        }
        int parentIndex = (index - 1) / 2;
        if (heapArray[index] < heapArray[parentIndex]) {
            swap(heapArray[index], heapArray[parentIndex]);
            heapifyUp(parentIndex);
        }
    }

public:
    BinaryHeap(int capacity) {
        this->capacity = capacity;
        heapArray = new int[capacity];
        size = 0;
    }

    ~BinaryHeap() {
        delete[] heapArray;
    }

    void insert(int data) {
        if (size >= capacity) {
            cout << "Heap is full" << endl;
            return;
        }
        heapArray[size] = data;
        heapifyUp(size);
        size++;
    }

    void displayHeap() {
        for (int i = 0; i < size; i++) {
            cout << heapArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    BinaryHeap minHeap(10); // Change the capacity as needed

    // Insert elements into the min heap
    minHeap.insert(10);
    minHeap.insert(7);
    minHeap.insert(15);
    minHeap.insert(3);
    minHeap.insert(12);

    cout << "Min Heap after insertion:" << endl;
    minHeap.displayHeap();

    return 0;
}
