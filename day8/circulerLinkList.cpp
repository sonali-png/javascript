#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = NULL;
    }

    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (head == NULL) {
            head = newNode;
            newNode->next = head;  // circular link
            return;
        }

        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
    }

    // Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }

    // Delete from beginning
    void deleteAtBeginning() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = head;

        // Only one node
        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node* last = head;
        while (last->next != head)
            last = last->next;

        last->next = head->next;
        head = head->next;

        delete temp;
    }

    // Delete from end
    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }

        // Only one node
        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = head;
        delete temp;
    }

    // Display list
    void display() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = head;
        cout << "Circular Linked List: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

// ---------------- MAIN FUNCTION ----------------
int main() {
    CircularLinkedList cll;

    cll.insertAtEnd(10);
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);
    cll.display();

    cll.insertAtBeginning(5);
    cll.display();

    cll.deleteAtBeginning();
    cll.display();

    cll.deleteAtEnd();
    cll.display();

    // cicrculer list operations

    return 0;
}