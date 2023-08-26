/* 33. Binary Min/Max Heap Deletion (Array Recursive Implementation)
       Problem Statement: Binary Min/Max Heap Deletion
       Develop a program that implements a binary min/max heap using an array and defines 
       a recursive method to delete elements from the heap while maintaining the min/max heap property. 
       Display the heap after deletion operations. */

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

    // Recursive function to maintain heap property after deletion
    void heapifyDown(int index) {
        int leftChildIndex = 2 * index + 1;
        int rightChildIndex = 2 * index + 2;
        int targetIndex = index;

        if (leftChildIndex < size && heapArray[leftChildIndex] < heapArray[targetIndex]) {
            targetIndex = leftChildIndex;
        }
        if (rightChildIndex < size && heapArray[rightChildIndex] < heapArray[targetIndex]) {
            targetIndex = rightChildIndex;
        }

        if (targetIndex != index) {
            swap(heapArray[index], heapArray[targetIndex]);
            heapifyDown(targetIndex);
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
        int currentIndex = size;
        size++;
        while (currentIndex > 0 && heapArray[currentIndex] < heapArray[(currentIndex - 1) / 2]) {
            swap(heapArray[currentIndex], heapArray[(currentIndex - 1) / 2]);
            currentIndex = (currentIndex - 1) / 2;
        }
    }

    int extractMin() {
        if (size <= 0) {
            return -1; // Return a sentinel value to indicate an empty heap
        }
        int minElement = heapArray[0];
        heapArray[0] = heapArray[size - 1];
        size--;
        heapifyDown(0);
        return minElement;
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

    // Extract the minimum element from the heap
    int minElement = minHeap.extractMin();
    cout << "Extracted Minimum Element: " << minElement << endl;

    cout << "Min Heap after extraction:" << endl;
    minHeap.displayHeap();

    return 0;
}
