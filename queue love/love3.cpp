// Implement Deque
// https://www.codingninjas.com/studio/problems/deque_1170059?leftPanelTab=0&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

#include <bits/stdc++.h> 
using namespace std;

class Deque
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        this->size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        // check overflow
        if(isFull()){
            // overflow case;
            return false;
        }
        else if(isEmpty()){
            // empty case (insert first element)
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1){
            // to maintain cyclic order
            front = size-1;
        }
        else{
            // normal push
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        // check overflow
        if(isFull()){
            // overflow case
            return false;
        }
        else if(isEmpty()){   // in empty case (front = rear)
            // empty case (insert first element)
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            // cyclic order maintain
            rear = 0;
        }
        else{
            // normal push
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        // underflow check
        if(isEmpty()){
            // underflow
            return -1;
        }
        int element = arr[front];
        if(front == rear){
            // single element in deque
            front = rear = -1;
        }
        else if(front == size-1){
            // maintain cyclic order
            front = 0;
        }
        else{
            // normal pop
            front++;
        }
        return element;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        // check underflow
        if(isEmpty()){
            // underflow
            return -1;
        }
        int element = arr[rear];
        if(front == rear){
            // single element present
            front = rear = -1;
        }
        else if(rear == 0){
            // cyclic order maintain
            rear = size-1;
        }
        else{
            // normal pop
            rear--;
        }
        return element;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(front == -1){
            // empty
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(rear == -1){
            // empty
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        // agar (front = -1) hota h to (front = rear) hoga
        return (front == -1);   
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1) % (size-1))){
            // overflow case;
            return true;
        }
        else{
            return false;
        }
    }
};