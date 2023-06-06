#include <iostream>
using namespace std;

#include "ArrayQueue.cpp"
#include "LinkedList.cpp"
#include "LinkedListQueue.cpp"

int main()
{
    ArrayQueue aq;

    cout << "isEmpty() : " << aq.isempty() << endl
         << endl;

    aq.enqueue(10);
    aq.enqueue(20);
    aq.enqueue(30);
    cout << "//enqueue 10,20 and 30" << endl;

    aq.display();
    cout << endl
         << "front() : " << aq.front() << endl;
    cout << "rear() : " << aq.rear() << endl
         << endl;

    aq.dequeue();
    cout << "//dequeue";
    aq.display();
}