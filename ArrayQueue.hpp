#ifndef ArrayQueue_h
#define ArrayQueue_h

#include "Queue.hpp"

#define MAX_SIZE 10

class ArrayQueue : public Queue{
    public:
        ArrayQueue() {Front = -1; Rear = -1;}
        bool isfull();
        bool isempty();
        void enqueue(int data);
        void dequeue();
        int front();
        int rear();
        void display();
    private:
        int arr[MAX_SIZE];
        int Front;
        int Rear;
};


#endif