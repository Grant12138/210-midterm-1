#include <iostream> // Includes the standard input/output stream library
using namespace std; // Standard namespace will be used throughout the code

const int MIN_NR = 10, MAX_NR = 99, MIN_LS = 5, MAX_LS = 20;

class DoublyLinkedList // Declares the DoublyLinkedList class
{
    private:
        struct Node
        {
            int data;
            Node* prev;
            Node* next;
            // Initialization list to
            Node(int val, Node* p = nullptr, Node* n = nullptr) : data(val), prev(p), next(n) {}
        };
};