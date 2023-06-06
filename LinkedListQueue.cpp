#include"LinkedList.hpp"
#include"LinkedListQueue.hpp"

#include<iostream>
using namespace std;

LinkedList list;

void LinkedListQueue::display(){
    list.traverse(',');
}

bool LinkedListQueue::isempty(){
    return list.isEmpty();

}

bool LinkedListQueue::isfull(){
    return list.isFull();
}

void LinkedListQueue::dequeue(){
    list.removefromhead();
}

void LinkedListQueue::enqueue(int data){
    list.addToTail(data);
}

int LinkedListQueue::front(){
    return list.HEAD->data;
}

int LinkedListQueue::rear(){
    return list.TAIL->data;
}