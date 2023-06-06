#include <iostream>
using namespace std;

#include"ArrayQueue.hpp"
#include"Queue.hpp"

bool ArrayQueue::isfull(){
    if(Rear == MAX_SIZE - 1){
        return true;
    }
    else{
        return false;
    }

}

bool ArrayQueue::isempty(){
    if (Front == -1 && Rear == -1){
        return true;
    } 
    else{
        return false;
    }
}

void ArrayQueue::enqueue(int data){
    if (this->isempty()){
        Front = 0;
        Rear++;
        arr[Rear] = data;
    }
    else if(this->isfull()){
        cout << "queue is full" << endl;
    }
    else{
        arr[Rear + 1] = data;
        Rear = Rear + 1;
    }

}

void ArrayQueue::dequeue(){
    if(this->isempty()){
        cout << "empty list" << endl;
    }
    else{
        arr[Front] = 0;
        Front++ ; 
    }
}

int ArrayQueue::front(){
    if (this->isempty()){
        cout << "empty list" << endl;
        return -1;
    }
    else{
        return arr[Front];
    }

}

int ArrayQueue::rear(){
    if (this->isempty()){
        cout << "empty list" << endl;
        return -1;
    }
    else{
        return arr[Rear];
    }
}


void ArrayQueue::display(){
    if (this->isempty()){
        cout << "empty list" << endl;
    }
    else{
        cout << endl << "Contents of the queue" << endl;
        for( int i = Front; i <= Rear; i++){
             cout << "  " <<  arr[i] << "  ";
        }
    }
}