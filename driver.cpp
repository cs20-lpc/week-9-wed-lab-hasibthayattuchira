#include "ArrayQueue.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    // integer test
    ArrayQueue<int> intQueue(5);

    cout << "Enqueueing 1, 2, 3" << endl;
    intQueue.enqueue(1);
    intQueue.enqueue(2);
    intQueue.enqueue(3);
    cout << "Front: " << intQueue.front() << endl;
    cout << "Back: " << intQueue.back() << endl;
    cout << "Length: " << intQueue.getLength() << endl;

    cout << "Dequeueing one element" << endl;
    intQueue.dequeue();
    cout << "Front: " << intQueue.front() << endl;
    cout << "Back: " << intQueue.back() << endl;
    cout << "Length: " << intQueue.getLength() << endl;

    cout << "Enqueueing 4, 5, 6" << endl;
    intQueue.enqueue(4);
    intQueue.enqueue(5);
    intQueue.enqueue(6);
    cout << "Front: " << intQueue.front() << endl;
    cout << "Back: " << intQueue.back() << endl;
    cout << "Length: " << intQueue.getLength() << endl;
    cout << "Full? " << (intQueue.isFull() ? "true" : "false") << endl;

    cout << "Dequeueing all elements" << endl;
    intQueue.clear();
    cout << "Length: " << intQueue.getLength() << endl;
    cout << "Empty? " << (intQueue.isEmpty() ? "true" : "false") << endl;

    // string test
    ArrayQueue<string> stringQueue(3);
    cout << "Enqueueing apple, banana, mango" << endl;
    stringQueue.enqueue("apple");
    stringQueue.enqueue("banana");
    stringQueue.enqueue("mango");

    cout << "Front: " << stringQueue.front() << endl;
    cout << "Back: " << stringQueue.back() << endl;
    cout << "Length: " << stringQueue.getLength() << endl;

    cout << "Dequeueing one element" << endl;
    stringQueue.dequeue();
    cout << "Front: " << stringQueue.front() << endl;
    cout << "Back: " << stringQueue.back() << endl;

    cout << "Dequeueing all elements" << endl;
    stringQueue.clear();
    cout << "Empty? " << (stringQueue.isEmpty() ? "true" : "false") << endl;

    // terminate
    return 0;
}