#ifndef LinkedList_h
#define LinkedList_h

#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node * next;

       Node()
    {
        data = 0;
        next = NULL;
    }
  
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    Node(int data, Node *next){
        this -> data = data;
        this -> next = next;
    }
     
};

class LinkedList {
    

    public:
        Node* HEAD;
        Node* TAIL;
        LinkedList(){this->HEAD = NULL;
        this->TAIL = NULL;
        }
        void traverse(char);
        void addToHead (int);
        void add(Node *pred , int);
        void addToTail(int);
        void removenode(int);
        void removefromhead();
        bool search(int);
        Node *retrieve(int);
        bool isEmpty();
        bool isFull();
};


#endif