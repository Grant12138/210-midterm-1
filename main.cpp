#include <iostream> // Includes the standard input/output stream library
using namespace std; // Standard namespace will be used throughout the code

const int MIN_NR = 10, MAX_NR = 99, MIN_LS = 5, MAX_LS = 20;

class DoublyLinkedList // Declares the DoublyLinkedList class
{
    private:
        struct Node
        {
            int data; // The data in a Node
            Node* prev; // The pointer to the previous Node
            Node* next; // The pointer to the next Node
            // Parametrized constructor that initializes the members using an initializer list
            Node(int val, Node* p = nullptr, Node* n = nullptr) : data(val), prev(p), next(n) {}
        };

        Node* head; // The pointer to the first Node struct in the linked-list
        Node* tail; // The pointer to the last Node struct in the linked-list

    public:
        // Default constructor to initialize an empty linked list
        DoublyLinkedList() : head(nullptr), tail(nullptr) {}

        // A class method to insert a new Node struct after a given position
        void insert_after(int value, int position)
        {
            if (position < 0) // First check if the position given is valid
            {
                cout << "Position must be >= 0." << endl;
                return;
            }

            Node* newNode = new Node(value); // Dynamically create a new Node struct
            if (!head) // Evaluates to true if the list is empty
            {
                head = tail = newNode;
                return;
            }

            // Traversing until the desired position is reached
            Node* temp = head;
            for (int i = 0; i < position && temp; ++i)
                temp = temp->next;

            if (!temp) // If temp is a nullptr, then the position is out of bounds
            {
                cout << "Position exceeds list size. Node not inserted.\n";
                delete newNode; // Free up the dynamically allocated memory
                return;
            }

            newNode->next = temp->next; // Link the new node with the next node
            newNode->prev = temp; // Link the new node with the previous node
            if (temp->next) // if not inserting at the end
                temp->next->prev = newNode;
            else // if so, the newNode becomes the tail
                tail = newNode;
            temp->next = newNode; // Insert new node after 'temp'
        }

        void delete_val(int value)
        {
            if (!head) return; // Nothing to delete if the list is empty

            Node* temp = head;
        }
};