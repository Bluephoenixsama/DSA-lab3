#ifndef LinkedLISTQUEUE_h
#define LinkedLISTQUEUE_h

#include"Queue.hpp"

class LinkedListQueue : public Queue{
    public:
        void enqueue(int data);
        void dequeue();
        bool isfull();
        bool isempty();
        int front();
        int rear();
        void display();
};


#endif