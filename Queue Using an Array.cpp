#include <iostream> 
using namespace std; 
  
class Queue { 
private: 
    int front, rear; 
    // Array to store queue elements 
    int arr[MAX]; 
  
public: 
    // Constructor to initialize front and rear as -1 
  
    Queue() { front = rear = -1; } 
    // Function to add an element to the queue 
    void enqueue(int x) 
    { 
        if (rear == MAX - 1) { 
            cout << "Error: Queue overflow" << endl; 
            return; 
        } 
        arr[++rear] = x; 
        if (front == -1) 
            front = 0; 
    } 
  
    // Function to remove an element from the queue 
    int dequeue() 
    { 
        if (front == -1) { 
            cout << "Queue underflow" << endl; 
            return -1; 
        } 
        int x = arr[front]; 
        if (front == rear) 
            front = rear = -1; 
        else
            front++; 
        return x; 
    } 
  
    // Function to check if queue is empty 
    bool isEmpty() { return (front == -1); } 
  
    // Function to return the front element of the queue 
    int peek() 
    { 
        if (front == -1) { 
            cout << "Queue is empty" << endl; 
            return -1; 
        } 
        return arr[front]; 
    } 
}; 
  
int main() 
{ 
    Queue q; 
    q.enqueue(1); 
    q.enqueue(2); 
    q.enqueue(3); 
    q.enqueue(4); 
    q.enqueue(5); 
  
    cout << "Dequeued element: " << q.dequeue() << endl; 
    cout << "Front element: " << q.peek() << endl; 
  
    return 0; 
}
